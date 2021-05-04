#ifndef WAV_H
#define WAV_H

#include "WaveHeader.h"

class Wav : public wav_header{
	unsigned char* buffer = NULL; //make a template?
    wav_header waveHeader;
public:

	/**
	* Checks if file is open and if it is it reads it in, then closes file
	* @param fileName - stores the file name as a string
	*/
    void readFile(const std::string &fileName);

	/**
	* Checks to see if the file opened, and then records the data in the file
	* @param outFileName - stored as string
	*/
    void writeFile(const std::string &outFileName);
	
	/**
	* gets the 8 bit buffer,stores it as an unsigned charactor pointer
	*/
	unsigned char *get8bitBuffer();

	/**
	* gets the 16 bit buffer, stores it as a short pointer
	*/
	short *get16bitBuffer();

	/**
	* gets the the size of the buffer 
	*/
    int getBufferSize() const;

	/**
	* /**
	* checks to see if the buffer is not null, if it is it deletes the buffer
	*/
	*/
	virtual ~Wav();
};

#endif
