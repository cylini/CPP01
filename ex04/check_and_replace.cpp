#include "include.hpp"

bool check_file(std::string &filename) // Vérifier si le fichier existe et est accessible
{
	struct stat file_stat;						  // Structure pour stocker les informations sur le fichier
	if (stat(filename.c_str(), &file_stat) == -1) // Verifier si le fichier existe et est accessible
	{
		if (errno == ENOENT)														 // si le fichier n'existe pas
			std::cerr << "Error: File does not exist." << std::endl;				 // afficher le message d'erreur n'existe pas
		else if (errno == EACCES)													 // si le fichier n'est pas accessible
			std::cerr << "Error: Permission denied." << std::endl;					 // afficher le message d'erreur permission refusée
		else																		 // si une autre erreur s'est produite
			std::cerr << "Error: Cannot access file. Errno: " << errno << std::endl; // afficher le message d'erreur avec le code d'erreur
		return false;
	}
	if (!S_ISREG(file_stat.st_mode)) // Vérifier si c'est un fichier régulier
	{
		std::cerr << "Error: Not a regular file." << std::endl;
		return false;
	}
	if (!(file_stat.st_mode & S_IRUSR)) // Vérifier si le fichier est lisible par l'utilisateur
	{
		std::cerr << "Error: File is not readable." << std::endl;
		return false;
	}
	return true;
}
void replaceStrings(std::ofstream &outputFile, const std::string &line, const std::string &s1, const std::string &s2)
{
	size_t pos = 0;												// Position de recherche
	std::string modified = line;								// Copie de la ligne d'origine
	while ((pos = modified.find(s1, pos)) != std::string::npos) // Trouver la position de la première occurrence de s1
	{
		modified = modified.substr(0, pos) + s2 + modified.substr(pos + s1.length()); // Remplacer s1 par s2
		pos += s2.length();															  // Avancer la position de recherche
	}
	outputFile << modified << std::endl; // Écrire la ligne modifiée dans le fichier de sortie
}
