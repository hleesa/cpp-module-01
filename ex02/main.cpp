#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN\n";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "The memory address of the string variable: " << &brain
			  << '\n';
	std::cout << "The memory address held by stringPTR: " << stringPTR << '\n';
	std::cout << "The memory address held by stringREF: " << &stringREF << "\n\n";

	std::cout << "The value of the string variable: " << brain;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR;
	std::cout << "The value pointed to by stringREF: " << stringREF;

	return 0;
}