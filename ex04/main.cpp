#include "FileReplacer.hpp"

int main(int argc, char* argv[]){
	if(argc == 4) {
		std::string argvString[3] = {argv[1], argv[2], argv[3]};
		FileReplacer fileReplacer(argvString[0], argvString[1], argvString[2]);
		fileReplacer.replace();
		return 0;
	}
	else {
		std::cerr << "error\n";
		return 1;
	}
}