#ifndef NORMALIZE_H
#define NORMALIZE_H

#include "IProcessor.h"

class Normalize : public IProcessor{
public:

	/**
	* Processes the buffer
	* @param buffer - buffer as unsigned character pointer
	* @param bufferSize - size of the buffer, in integers
	* @param bitSize - 8 bits, stored as integers
	* @param signEd - 
	*/
    void processBuffer(unsigned char* buffer, int bufferSize, int bitSize, bool signEd);

	/**
	* Processes the buffer
	* @param buffer - buffer stored as a short array
	* @param bufferSize - size of the buffer, in integers
	* @param bitSize - 16 bits, stored as integers
	* @param signEd - 
	*/
    void processBuffer(short buffer[], int bufferSize, int bitSize, bool signEd);
};

#endif
