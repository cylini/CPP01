#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::Zombie(std::string name) : name(name) // constructeur
{
	std::cout << "Zombie " << name << " created." << std::endl;
}

Zombie::~Zombie(void) // destructeur
{
	std::cout << "Zombie " << name << "destroyed" << std::endl;
}
void Zombie::announce(void) const // fonction d'annonce
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) // setter, fonction qui permet de changer le nom du zombie
{
	this->name = name;
}