#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return 0; // si N <= 0, return 0

	Zombie *horde = new Zombie[N]; // allocation dynamique d'un tableau de N zombies
	for (int i = 0; i < N; ++i)
	{
		horde[i].setName(name); // initialisation du nom de chaque zombie
	}
	return horde; // on retourne l'adresse du tableau de zombies
}