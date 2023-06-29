#include "FileReplacer.hpp"

FileReplacer::FileReplacer(std::string inputFileName, std::string s1, std::string s2){
	this->inputFileName = inputFileName;
	this->outputFileName = inputFileName + ".replace";
	this->s1 = s1;
	this->s2 = s2;
}

bool FileReplacer::replace() {

	std::ifstream inputFile(inputFileName.c_str());
	if (!inputFile.is_open()) {
		std::cerr << "Error: could not open input file\n";
		return false;
	}

	std::ofstream outputFile(outputFileName.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "Error: could not open output file\n";
		inputFile.close();
		return false;
	}

	std::string line;
	std::string oldStr(s1);
	std::string newStr(s2);
	while (std::getline(inputFile, line)){
		replaceStr(line, oldStr, newStr);
		outputFile << line << std::endl;
	}
	inputFile.close();
	outputFile.close();

	return true;
}
