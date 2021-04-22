#include "echo.h"

int delay;

Echo::Echo(int samples){
    delay = samples;
}

void Echo::processBuffer(unsigned char* buffer, int bufferSize){
    for(int i=0; i < bufferSize; i++){ //maybe start at 45
        
        buffer[i] = (buffer[i]/2) + (buffer[i - getDelay()]/2);
        if(buffer[i] > 255){
            buffer[i] = 255;
        }
    }
}

int Echo::getDelay() const{
    return delay;
}