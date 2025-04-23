#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
class Zombie
{
private:
	std::string name; // nom du zombie

public:
	Zombie();
	Zombie(std::string name);		// constructeur
	~Zombie(void);					// destructeur
	void announce(void) const;		// fonction d'annonce
	void setName(std::string name); // setter, fonction qui permet de changer le nom du zombie
};
Zombie *zombieHorde(int N, std::string name); // fonction qui permet de créer un tableau de zombies

#endif
