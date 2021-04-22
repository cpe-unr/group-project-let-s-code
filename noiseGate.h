#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "Processor.h"

class NoiseGate : public Processor{
    int threshold;
public:
    NoiseGate(int percent);
    void processBuffer(unsigned char* buffer, int bufferSize);
    double getThreshold() const;
};

#endif