#ifndef ECHO_H
#define ECHO_H

#include "Processor.h"

class Echo : public Processor{
    int delay;
public:
    Echo(int samples);
    void processBuffer(unsigned char* buffer, int bufferSize);
    int getDelay() const;
};

#endif