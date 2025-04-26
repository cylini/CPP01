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

	if (!check_file(filename))
		return 1;
	// Ouvrir le fichier d'entrée
	std::ifstream inputFile(filename.c_str()); // c_str(): convertit std::string en const char*
	if (!inputFile.is_open())
	{
		std::cerr << "Error: could not open input file." << std::endl;
		return 1;
	}

	// Créer le fichier de sortie
	std::ofstream outputFile(newfilename.c_str());

	if (!outputFile.is_open())
	{
		std::cerr << "Error: could not create output file." << std::endl;
		inputFile.close();
		return 1;
	}

	std::string line;

	// Lire le fichier ligne par ligne
	while (std::getline(inputFile, line))
		replaceStrings(outputFile, line, s1, s2);
	// {
	// 	size_t pos = 0;
	// 	// Tant qu'on trouve s1 dans la ligne
	// 	while ((pos = line.find(s1, pos)) != std::string::npos)
	// 	{
	// 		// Remplacer s1 par s2 manuellement
	// 		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
	// 		// Avancer la position pour éviter de boucler infiniment
	// 		pos += s2.length();
	// 	}

	// 	// Écrire la ligne modifiée dans le fichier de sortie
	// 	outputFile << line << std::endl;
	// }

	// Fermer les fichiers
	inputFile.close();
	outputFile.close();

	return 0;
}