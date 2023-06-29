#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileReplacer {

private:
	std::string inputFileName;
	std::string outputFileName;
	std::string s1;
	std::string s2;

public:
	FileReplacer(std::string inputFileName, std::string s1, std::string s2);
	bool replace();
};

void replaceStr(std::string& str, const std::string& oldStr, const std::string& newStr);

#endif //FILEREPLACER_HPP
