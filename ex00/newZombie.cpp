#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	// Zombie* newZombie = new Zombie(name);
	// return newZombie;
	return new Zombie(name);
	// The above line creates a new Zombie object on the heap with the given name and returns a pointer to it.
}
// This function creates a new Zombie object on the heap with the given name and returns a pointer to it.
// The Zombie object will be destroyed when the pointer is deleted or goes out of scope.
