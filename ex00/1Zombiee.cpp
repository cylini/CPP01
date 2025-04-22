#include "Zombiee.hpp"

Zombiee::Zombiee(std::string name) : name(name) // constructeur avec parametre name, initialise le nom de Zombiee
{
	std::cout << "Zombiee" << this->name << "is created." << std::endl; // affiche le nom du Zombiee + " is created."
}
Zombiee::~Zombiee(void) // destructeur
{
	std::cout << "Zombiee" << this->name << "is destroyed." << std::endl; // affiche le nom du Zombiee + " is destroyed."
}
void Zombiee::announce(void) // method to annouce the Zombiee
{
	std::cout << this->name << ":BraiiiiiiinnnzzzZ..." << std::endl; // affiche le nom du Zombiee + " : BraiiiiiiinnnzzzZ..."
}