#ifndef INCLUDE_HPP
#define INCLUDE_HPP

#include <iostream>																									   //bibliotheque d'entree/sortie
#include <fstream>																									   //Bibliothèque pour la gestion des fichiers (ifstream, ofstream)
#include <string>																									   //bibliotheque de chaines de caracteres
#include <sys/stat.h>																								   //Bibliothèque pour obtenir des informations sur les fichiers (stat)
void replaceStrings(std::ofstream &outputFile, const std::string &line, const std::string &s1, const std::string &s2); // Fonction pour remplacer les occurrences de s1 par s2 dans une ligne
bool check_file(std::string &filename);																				   // Fonction pour vérifier si le fichier existe et est accessible

#endif