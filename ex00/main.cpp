
#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1("A");
	zombie1.announce();

	Zombie* zombie2 = newZombie("B");
	zombie2->announce();
	delete(zombie2);

	randomChump("C");
//	system("leaks zombie");
	return 0;
}