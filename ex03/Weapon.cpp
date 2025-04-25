#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) // constructor
{
}
const std::string &Weapon::getType(void) const // getter (capture the type)
{
	return (this->_type); // return the type
}
void Weapon::setType(const std::string &newType) // setter (change the type)
{
	this->_type = newType; // change the type
}
