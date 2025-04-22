#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie " << this->name << " is created." << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
}
void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
// This function announces the name of the Zombie object by printing it to the console.
// The name is accessed through the member variable of the Zombie class.