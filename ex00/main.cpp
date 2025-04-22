#include "Zombie.hpp"

int main(void)
{
	Zombie* zombie1 = newZombie("Foo");//create a new Zombie object on the heap
	zombie1->announce();//call the announce method on the Zombie object
	delete zombie1;//delete the Zombie object to free up memory

	randomChump("tom");//create a Zombie object on the stack

	Zombie* zombie3 = newZombie("dimmy");//create a new Zombie object on the heap
	zombie3->announce();//call the announce method on the Zombie object
	delete zombie3;//delete the Zombie object to free up memory

	return 0;
}