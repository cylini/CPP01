#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies = zombieHorde(5, "Zozie ");
	if (zombies == 0)
	{
		std::cout << "Failed to allocate memory for zombies." << std::endl;
		return 1;
	}
	for (int i = 0; i < 5; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies; // liberation de la memoire
	return 0;
	// Zombie *zombies = zombieHorde(5, "Zombie");
	// if (zombies == nullptr)
	// {
	// 	std::cout << "Failed to create zombie horde." << std::endl;
	// 	return 1;
	// }
	// for (int i = 0; i < 5; ++i)
	// {
	// 	zombies[i].announce();
	// }
	// delete[] zombies;//libération de la mémoire
	// return 0;
}