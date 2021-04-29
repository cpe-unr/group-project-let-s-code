#include <string>
#include <fstream>
#include <iostream>
#include "csv.h"

//Dont know where to start with letting the user export the CSV file -Annie

void CSV::readFile(const std::string &filename){
	std::string line;
	//do I need line below? 
	//paige: this has been taken care of in driver. ideally, we don't want to pass files anywhere 
	//unless they have already been checked. therefore, we will only pass legit files into any 
	//classes and no further checks are neeeded :)

	//paige: also, you might want to ask sarah, but I don't think that the csv class need a read file. 
	//the metadata should already be stored in the attributes of the wav class/object for each song.
	//I think csv only need a write file to handle user edits (?)
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
