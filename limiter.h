#ifndef LIMITER_H
#define LIMITER_H

#include "IProcessor.h"

class Limiter : public IProcessor{

public: 
    //Limiter(int limit);
    void processBuffer(unsigned char* buffer, int bufferSize);
};

#endif