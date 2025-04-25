#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(const std::string &type);		  // constructor
	const std::string &getType() const;		  // getter (capture the type)
	void setType(const std::string &newType); // setter (change the type)
};
#endif