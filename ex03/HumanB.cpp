
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){}

HumanB::~HumanB() {}

void HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << '\n';
	return;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
	return;
}
