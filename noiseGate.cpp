#include "noiseGate.h"

double threshold;

NoiseGate::NoiseGate(int percent){
    threshold = 255 * (percent/100); //convert given % to equal porportion of sound (ex: 5% of sound variation)
}

void NoiseGate::processBuffer(unsigned char* buffer, int bufferSize, int midpoint, bool signEd){ //midpoint is 128 for 8 bit and 0 for 16 bit (signed)
    for (int i=0; i < bufferSize; i++){ //might start at 45
        if((buffer[i] > midpoint + getThreshold()) || (buffer[i] < midpoint - getThreshold())){
            buffer[i] = midpoint;
        }
    }
}

void NoiseGate::processBuffer(short buffer[], int bufferSize, int midpoint, bool signEd){ //midpoint is 128 for 8 bit and 0 for 16 bit (signed)
    for (int i=0; i < bufferSize; i++){ //might start at 45
        if((buffer[i] > midpoint + getThreshold()) || (buffer[i] < midpoint - getThreshold())){
            buffer[i] = midpoint;
        }
    }
}

double NoiseGate::getThreshold() const{
    return threshold;
}