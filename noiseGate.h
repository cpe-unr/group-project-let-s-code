#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "IProcessor.h"

class NoiseGate : public IProcessor{
    int threshold;
public:
    NoiseGate(int percent);
    void processBuffer(unsigned char* buffer, int bufferSize);
    double getThreshold() const;
};

#endif