#include "limiter.h"

#define MAX_THRESH 0.8
#define MIN_THRESH 0.2

void Limiter::processBuffer(unsigned char* buffer, int bufferSize, int bitSize, bool signEd){ //bit size should be 255 for 8 bit songs, and 32767 for 16 bit songs
    int min = 0;
    int max = bitSize * MAX_THRESH;
    if(!signEd){
        min = bitSize * MIN_THRESH;
    }else{
        min = (bitSize * -1) * MIN_THRESH;
    }

    for (int i=0; i < bufferSize; i++){ //might start at 45
        if(buffer[i] > max){
            buffer[i] = max;
        }
        if(buffer[i] < min){
            buffer[i] = min;
        }
    }
}