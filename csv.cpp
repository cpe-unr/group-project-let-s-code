#include <string>
#include <fstream>
#include <iostream>
#include "csv.h"

//I do not where to start to access info chunk for editing - Annie

/*
CSV::CSV(std::string data){
	
}
*/

unsigned char *Wav::getBuffer(){
	return buffer;
}

void CSV::writeFile(const std::string &outFileName){
	//do I need line below?
	std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
	if(file.is_open()){
		outFile.write(); //? Should I put this here?
		file << "user edits metadata?\n";
		outFile.close();
	}else{
		std::cout << "Cannot open CSV file";
	}
	//outFile.write();
	//outFile.close();
}

CSV::~CSV(){
	if(buffer != NULL){
		delete[] buffer;
	}
}

//void CSV::setData();
