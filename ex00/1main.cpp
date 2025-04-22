#include "Zombiee.hpp"

int main(void)
{
	Zombiee *ZombieAA = newZombiee("foooww"); // create a new Zombie object on the heap
	ZombieAA->announce();					  // call the announce method on the Zombiee object
	delete ZombieAA;						  // delete the Zombie object to free up memory

	Zombiee *ZombieeBB = newZombiee("hassss"); // create a new Zombiee object on the heap
	ZombieeBB->announce();					   // call the announce methode on the Zombiee object
	delete ZombieeBB;

	randomChump("tommmyyy"); // create a Zombie object on the stack
	return 0;
}