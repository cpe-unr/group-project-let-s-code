#ifndef LIMITER_H
#define LIMITER_H

#include "Processor.h"

class Limiter : public Processor{

public: 
    //Limiter(int limit);
    void processBuffer(unsigned char* buffer, int bufferSize);
};

#endif