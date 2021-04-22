#include "noiseGate.h"

double threshold;

NoiseGate::NoiseGate(int percent){
    threshold = 255 * (percent/100); //convert given % to equal porportion of sound (ex: 5% of sound variation)
}

void NoiseGate::processBuffer(unsigned char* buffer, int bufferSize){
    for (int i=0; i < bufferSize; i++){ //might start at 45
        if((buffer[i] > 128 + getThreshold()) || (buffer[i] < 128 - getThreshold())){
            buffer[i] = 128;
        }
    }
}

double NoiseGate::getThreshold() const{
    return threshold;
}