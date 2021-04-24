#include <string>
#include <fstream>
#include <iostream>
#include "csv.h"

void CSV::readFile(const std::string &filename){
	std::ifstream file;
	if(file.is_open()){
	//file.read();
	file.close();
	}
}

void CSV::writeFile(const std::string &outFileName){
	//std::
	outFile.write();
	outFile.close();
}
