#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club("bomb"); // donne le nom de l'arme

	HumanA bob("Boby", club);				 // donne le nom de la personne et l'arme
	bob.attack();							 // Bob attacks with their crude spiked club
	club.setType("some other type of club"); // lui change le nom de l'arme
	bob.attack();							 // Bob attacks with their some other type of club

	Weapon knife("sharp knife");   // donne le nom de l'arme
	HumanB jim("Jimy");			   // donne le nom de la personne
	jim.attack();				   // Jim has no weapon
	jim.setWeapon(knife);		   // donne l'arme à la personne
	jim.attack();				   // Jim attacks with their sharp knife
	knife.setType("butter knife"); // lui change le nom de l'arme
	jim.attack();				   // Jim attacks with their butter knife
}
