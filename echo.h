#ifndef ECHO_H
#define ECHO_H

#include "IProcessor.h"

class Echo : public IProcessor{
    int delay;
public:
	
	/**
	* Sets the sample as a delay
	* @param samples - stores samples as integers
	*/
    Echo(int samples);

	/**
	* Processes the buffer
	* @param buffer - buffer as unsigned character pointer
	* @param bufferSize - size of the buffer, in integers
	* @param bitsize - How many bits are in the song (8 or 16), as integers
	* @param signEd - 
	*/
    void processBuffer(unsigned char* buffer, int bufferSize, int bitSize, bool signEd);

	/**
	* Processes the buffer
	* @param buffer - buffer as unsigned character pointer
	* @param bufferSize - size of the buffer, in integers
	* @param bitsize - How many bits are in the song (8 or 16), as integers
	* @param signEd - 
	*/ 
    void processBuffer(short buffer[], int bufferSize, int bitSize, bool signEd);

	/**
	* Gets the delay
	*/
    int getDelay() const;
};

#endif
