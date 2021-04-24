/*
 * This class is designed to work with PCM 8-bit mono wavefiles.
 * It makes many assumptions about the format of the wave as a result.
 * It will NOT work with stereo files or any other bit-depth than 8 bits.
 */

#include <string>
#include <fstream>
#include <iostream>
#include "Wav.h"

void Wav::readFile(const std::string &fileName) {
    std::ifstream file(fileName,std::ios::binary | std::ios::in);
    if(file.is_open()){
        file.read((char*)&waveHeader, sizeof(wav_header));
        buffer = new unsigned char[waveHeader.data_bytes];
        file.read((char*)buffer, waveHeader.data_bytes);
        file.close();
    }
}


unsigned char *Wav::getBuffer(){
    return buffer;
}

void Wav::writeFile(const std::string &outFileName) {
    std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);
    outFile.write((char*)&waveHeader,sizeof(wav_header));
    outFile.write((char*)buffer, waveHeader.data_bytes);
    outFile.close();
}

Wav::~Wav() {
    if(buffer != NULL)
        delete[] buffer;
}

int Wav::getBufferSize() const {
    return waveHeader.data_bytes;
}



///////////////////////////////////////////////////////////
/*
#include <string>
#include <fstream>
#include <iostream>
#include "wav.h"

void Wav::readFile(const std::string &filename){
	std::ifstream file;
	if(file.is_open()){
	//file.read();
	file.close();
	}
}

void Wav::writeFile(const std::string &outFileName){
	//std::
	outFile.write();
	outFile.close();
}
*/