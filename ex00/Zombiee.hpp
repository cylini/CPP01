#ifndef Zombiee_hpp
#define Zombiee_hpp
#include <iostream>

class Zombiee
{
private:
	std::string name;

public:
	Zombiee(std::string name); // constructor with name parameter
	~Zombiee(void);			   // destructor
	void announce(void);	   // method to announce the Zombiee
};
Zombiee *newZombiee(std::string name); // create a new Zombiee object on the heap
void randomChump(std::string name);	   // create a Zombiee object on the stack
#endif