#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "IProcessor.h"

class NoiseGate : public IProcessor{
    int threshold;
public:

	/**
	* Sets the threshold equal to the percentage
	* @param percent - percentage as an integer
	*/
    NoiseGate(int percent);

	/**
	* Processes the buffer
	* @param buffer - buffer as unsigned character pointer
	* @param bufferSize - size of the buffer, in integers
	* @param bitSize - 8 bits, stored as integers
	* @param signEd - 
	*/
    void processBuffer(unsigned char* buffer, int bufferSize, int midpoint, bool signEd);
	
	/**
	* Processes the buffer
	* @param buffer - buffer stored as a short array
	* @param bufferSize - size of the buffer, in integers
	* @param bitSize - 16 bits, stored as integers
	* @param signEd - 
	*/
    void processBuffer(short buffer[], int bufferSize, int midpoint, bool signEd);

	/**
	* Gets the threshold and returns it
	*/
    double getThreshold() const;
};

#endif
