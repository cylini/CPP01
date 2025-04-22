#include "Zombie.hpp"

Zombie* newZombie(std::string name)//create a new Zombie object on the heap
{
	return new Zombie(name);//return a pointer to the new Zombie object
}
