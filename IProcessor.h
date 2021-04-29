#ifndef IPROCESSOR_H
#define IPROCESSOR_H


#include <cstdint>
#include <cmath>

class IProcessor {
public:
    virtual void processBuffer(unsigned char* buffer, int bufferSize, int bitSize, bool signEd) = 0; //8 bit
    virtual void processBuffer(short buffer[], int bufferSize, int bitSize, bool signEd) = 0; //16 bit
};


#endif
