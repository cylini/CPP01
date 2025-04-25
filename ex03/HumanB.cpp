// HumanB.cpp
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(0) {} // constructor

void HumanB::setWeapon(Weapon &weapon) // setter (change l'arme)
{
	this->_weapon = &weapon; // change l'arme
}

void HumanB::attack() const // attaque
{
	if (_weapon)																		 // check if weapon is not null
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl; // attack
	else																				 // if weapon is null
		std::cout << _name << " has no weapon" << std::endl;							 // no attack
}
