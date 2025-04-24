#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private:
	std::string name;
	Weapon &weapon; // référence = doit toujours exister

public:
	HumanA(const std::string &name, Weapon &weapon);
	void attack() const;
};

#endif
