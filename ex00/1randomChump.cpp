#include "Zombiee.hpp"

void randomChump(std::string name)//create a Zombiee object on the stack
{
	Zombiee randomChump(name);//create a Zombiee object on the stack
	randomChump.announce();//call the annoounce method on the Zombiee object
}