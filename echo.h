#ifndef ECHO_H
#define ECHO_H

#include "IProcessor.h"

class Echo : public IProcessor{
    int delay;
public:
    Echo(int samples);
    void processBuffer(unsigned char* buffer, int bufferSize);
    int getDelay() const;
};

#endif