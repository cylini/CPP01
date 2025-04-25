#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private:
	std::string _name; // type string pour le nom
	Weapon &_weapon;   // référence = doit toujours exister

public:
	HumanA(const std::string &name, Weapon &weapon); // constructeur
	void attack() const;							 // attaque
};

#endif
