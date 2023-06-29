#include "FileReplacer.hpp"

void replaceStr(std::string& str, const std::string& oldStr, const std::string& newStr){
	size_t pos = 0;
	while ((pos = str.find(oldStr, pos)) != std::string::npos) {
		str = str.substr(0, pos) + newStr + str.substr(pos + oldStr.length());
		pos += newStr.length();
	}
	return;
}