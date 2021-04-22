#ifndef IPROCESSOR_H
#define IPROCESSOR_H


#include <cstdint>
#include <cmath>

class IProcessor {
public:
    virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;
};


#endif
