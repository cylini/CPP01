#include "Zombie.hpp"
// #include "newZombie.cpp"
// #include "randomChump.cpp"
// This function creates a Zombie object on the stack with the given name and announces it.
// The Zombie object will be destroyed automatically when it goes out of scope.
// The function is defined in the randomChump.cpp file and is included here for completeness.

int main(void)
{
	Zombie* zombie1 = newZombie("Foo");
	zombie1->announce();
	delete zombie1;

	randomChump("tom");

	Zombie* zombie3 = newZombie("dimmy");
	zombie3->announce();
	delete zombie3;

	return 0;
}