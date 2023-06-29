#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[DEBUG]\n";
	return ;
}

void Harl::info() {
	std::cout << "[INFO]\n";
	return ;
}

void Harl::warning() {
	std::cout << "[WARNING]\n";
	return ;
}

void Harl::error() {
	std::cout << "[ERROR]\n";
	return;
}

void Harl::complain(std::string level) {

	std::string validLevels[4] = {"debug", "info", "warning", "error"};
	typedef void (Harl::*memberFunc)();
	memberFunc toMemberFunc[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i;
	for (i = 0; i < 4; ++i) {
		if(level == validLevels[i]) {
			break;
		}
	}
	switch (i) {
		case 0: (this->*toMemberFunc[0])();
		case 1: (this->*toMemberFunc[1])();
		case 2: (this->*toMemberFunc[2])();
		case 3: (this->*toMemberFunc[3])();
			return;
		default: std::cerr << "Invalid level: " << level << std::endl;
	}
	return;
}