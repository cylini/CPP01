#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
private:
	std::string _name; // type string pour le nom
	Weapon *_weapon;   // pointeur = peut être null

public:
	HumanB(const std::string &name); // constructeur
	void setWeapon(Weapon &weapon);	 // setter (change l'arme)
	void attack() const;			 // attaque
};

#endif
