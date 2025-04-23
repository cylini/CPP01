#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name; // The name of the Zombie

public:
	Zombie(std::string name); // Constructor that initializes the Zombie with a name
	~Zombie(void);			  // Destructor that cleans up the Zombie object
	void announce(void);	  // Function that announces the name of the Zombie
};

Zombie *newZombie(std::string name); // Function that creates a new Zombie object on the heap
void randomChump(std::string name);	 // Function that creates a Zombie object on the stack and announces it
// The function is defined in the randomChump.cpp file and is included here for completeness.
// This function creates a Zombie object on the stack with the given name and announces it.
// The Zombie object will be destroyed automatically when it goes out of scope.
#endif