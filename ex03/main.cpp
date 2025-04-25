#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club("bomb");

	HumanA bob("Boby", club);
	bob.attack(); // Bob attacks with their crude spiked club
	club.setType("some other type of club");
	bob.attack(); // Bob attacks with their some other type of club

	Weapon knife("sharp knife");
	HumanB jim("Jimy");
	jim.attack(); // Jim has no weapon
	jim.setWeapon(knife);
	jim.attack(); // Jim attacks with their sharp knife
	knife.setType("butter knife");
	jim.attack(); // Jim attacks with their butter knife
}
