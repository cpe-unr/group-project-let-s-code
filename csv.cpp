#include <string>
#include <fstream>
#include <iostream>
#include "csv.h"

//Dont know where to start with letting the user export the CSV file -Annie

void CSV::readFile(const std::string &filename){
	std::string line;
	//do I need line below?
	std::ifstream file(filename, std::ios::binary | std::ios:in);
	if(file.is_open()){
		while(getline (file, line)){
			std::cout << line << "\n";
		}
	file.close();
	}
	else{
		std::cout << "Cannot open CSV file";	
	}
	return 0;
}

void CSV::writeFile(const std::string &outFileName){
	//do I need line below?
	std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
	if(file.is_open()){
		file << "user edits metadata?\n";
		outFile.close();
	}else{
		std::cout << "Cannot open CSV file";
	}
	//outFile.write();
	//outFile.close();
}
