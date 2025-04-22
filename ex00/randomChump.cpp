#include "Zombie.hpp"

void randomChump(std::string name)//create a Zombie object on the stack
{
	Zombie randomChump(name);//create a Zombie object on the stack
	randomChump.announce();//call the announce method on the Zombie object
}