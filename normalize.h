#ifndef NORMALIZE_H
#define NORMALIZE_H

#include "IProcessor.h"

class Normalize : public IProcessor{
public:
    void processBuffer(unsigned char* buffer, int bufferSize, int bitSize, bool signEd);
    void processBuffer(short buffer[], int bufferSize, int bitSize, bool signEd);
};

#endif