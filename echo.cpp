#include "echo.h"

int delay;

Echo::Echo(int samples){
    delay = samples;
}

//make template to pass in buffer or overload
void Echo::processBuffer(unsigned char* buffer, int bufferSize, int bitSize, bool signEd){ //bit size should be 255 for 8 bit songs, and 32767 for 16 bit songs
    for(int i=0; i < bufferSize; i++/*i+2 for left and right channel*/){ //maybe start at 45
        buffer[i] = (buffer[i]/2) + (buffer[i - getDelay()]/2);
        if(buffer[i] > bitSize){
            buffer[i] = bitSize;
        }
    }
}

void Echo::processBuffer(short buffer[], int bufferSize, int bitSize, bool signEd){ //bit size should be 255 for 8 bit songs, and 32767 for 16 bit songs
    for(int i=0; i < bufferSize; i++/*i+2 for left and right channel*/){ //maybe start at 45
        buffer[i] = (buffer[i]/2) + (buffer[i - getDelay()]/2);
        if(buffer[i] > bitSize){
            buffer[i] = bitSize;
        }
    }
}

int Echo::getDelay() const{
    return delay;
}