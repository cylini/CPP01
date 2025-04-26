#include "include.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		// a voir si on met cerr ou cout
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string newfilename = filename + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (!check_file(filename)) // Vérifier si le fichier existe
		return 1;
	// Ouvrir le fichier d'entrée
	std::ifstream inputFile(filename.c_str()); // c_str(): convertit std::string en const char*
	if (!inputFile.is_open())				   // verifie si le fichier est ouvrable
	{
		std::cerr << "Error: could not open input file." << std::endl; // si le fichier n'est pas ouvrable, le msg erreur
		return 1;
	}
	std::ofstream outputFile(newfilename.c_str()); // Créer le fichier de sortie
	if (!outputFile.is_open())
	{
		std::cerr << "Error: could not create output file." << std::endl;
		inputFile.close();
		return 1;
	}
	std::string line;							  // Variable pour stocker chaque ligne
	while (std::getline(inputFile, line))		  // Lire le fichier ligne par ligne
		replaceStrings(outputFile, line, s1, s2); // Remplacer les occurrences de s1 par s2
	// Fermer les fichiers
	inputFile.close();	// Fermer le fichier d'entrée
	outputFile.close(); // Fermer le fichier de sortie

	return 0;
}