
#include "Zombie.hpp"

int main(void) {

	int N = 5;
	Zombie* z1 = zombieHorde(N, "zombie");

	for (int i = 0; i < N; ++i) {
		z1[i].announce();
	}

	delete[] z1;

//	system("leaks zombieHorde");
	return 0;
}