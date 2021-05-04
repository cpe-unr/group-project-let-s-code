#ifndef IPROCESSOR_H
#define IPROCESSOR_H


#include <cstdint>
#include <cmath>

class IProcessor {
public:

	/**
	* Processes the buffer
	* @param buffer - buffer as unsigned character pointer
	* @param bufferSize - size of the buffer, in integers
	* @param bitSize - 8 bits, stored as integers
	* @param signEd - 
	*/
    virtual void processBuffer(unsigned char* buffer, int bufferSize, int bitSize, bool signEd) = 0; //8 bit

	/**
	* Processes the buffer
	* @param buffer - buffer stored as a short array
	* @param bufferSize - size of the buffer, in integers
	* @param bitSize - 16 bits, stored as integers
	* @param signEd - 
	*/
    virtual void processBuffer(short buffer[], int bufferSize, int bitSize, bool signEd) = 0; //16 bit
};


#endif
