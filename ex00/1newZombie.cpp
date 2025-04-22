#include "Zombiee.hpp"

Zombiee* newZombiee(std::string name)//create a new Zombiee object on the heap
{
	return new Zombiee(name);//return a pointer to the new Zombiee object
}