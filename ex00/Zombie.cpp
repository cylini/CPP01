#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)//constructor with name parameter
{
	std::cout << "Zombie " << this->name << " is created." << std::endl;//affiche le nom du zombie + " is created."
}
Zombie::~Zombie(void)//destructor
{
	std::cout << "Zombie " << this->name << " is destroyed." << std::endl;//affiche le nom du zombie + " is destroyed."
}
void Zombie::announce(void)//method to announce the zombie
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;//affiche le nom du zombie + " : BraiiiiiiinnnzzzZ..."
}
