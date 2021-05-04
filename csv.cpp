#include <string>
#include <fstream>
#include <iostream>
#include "csv.h"

//Paige: the metadata should be stored in the wave_header in tilte and artist on lines 45 and 46
//I should have read this in, but I can't test to see if it works, the makefile was gin=ving me a weird error
//you shoould just be able to incule and inherit this file and it will allow you access to all the 
//public attributes (as it's a struct)
//you can them directly edit from here

/*
CSV::CSV(std::string title, std::string artist){ 
	
}
*/


//Paige: there's a method for this in wav. If you need the buffer, you can just send 
//stuff in from the vector of songs (or the vector itself) and call either 
//wav.get8bitBuffer() or wav.get16bitBuffer() depending on the bit depth of the song 
//(also found under wave_header line 37)
/*
unsigned char *Wav::getBuffer(){
	return buffer;
}
*/
//I guess im not gonna include the getBuffer since its already in Wav

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

//is this better than the one above?
void CSV::writeFile(const std::string &outFileName){
	if(file.is_open()){
		outFile.write((char*)&waveHeader, Wav.title);
		outFile.write((char*)&waveHeader, Wav.artist);
	}else{
		std::cout << "Cannot open CSV file";
		outFile.close();
	}
}

CSV::~CSV(){
	if(buffer != NULL){
		delete[] buffer;
	}
}

//Im not sure if we need the bottom stuff - Annie
/*
std::string CSV::getTitle() const{
	return title;
}

std::string CSV::getArtist() const{
	return artist;
}
*/
