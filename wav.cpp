#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

#include "Wav.h"
#include "WaveHeader.h"

void Wav::readFile(const std::string &fileName){
    std::ifstream file(fileName,std::ios::binary | std::ios::in);
    if(file.is_open()){
        file.read((char*)&waveHeader, sizeof(wav_header)); //read in the initial data chunk header (44)
        buffer = new unsigned char[waveHeader.data_bytes]; //array of unsigned chars, index value from wave_header
        file.read((char*)buffer, waveHeader.data_bytes); //read in the song data

         
        //maybe put in a loop and ignore 1 dot at a time?
        //or read in with dots and when outputting, not output dots, 
        //or put characters into a seperate string w/o dots

        //read in metadata (? - idk if this works)
        std::string temp;
        std::istringstream stream(fileName);
        while(!stream.eof()){ 
            stream >> temp;
            if(temp.find(".") == std::string::npos){
                if(temp == "INAM" || temp == "inam"){
                    stream >> temp;
                    wav_header::title = temp;
                }
                if(temp == "IART" || temp == "iart"){
                    stream >> temp;
                    wav_header::artist = temp;
                }
            }
            file.close();
        }
    }
}

unsigned char *Wav::get8bitBuffer(){
    return buffer;
}

short *Wav::get16bitBuffer(){
	short* shortBuffer = reinterpret_cast<short*>(buffer); //from Lancster video
    return shortBuffer;
}

//do I need a template here for 16 bit (short)?
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