
#include "Zombie.hpp"

Zombie::Zombie() {
	std::string message = this->name + ": Zombie()\n";
	std::cout << message;
}

Zombie::Zombie(std::string name) : name(name){
	std::string message = this->name + ": Zombie(name)\n";
	std::cout << message;
}

Zombie::~Zombie() {
	std::string message = this->name + ": ~Zombie()\n";
	std::cout << message;
}

void Zombie::announce() {
	std::string message = this->name + ": BraiiiiiiinnnzzzZ...\n";
	std::cout << message;
	return;
}

