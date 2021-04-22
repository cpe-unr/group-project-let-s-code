#include "limiter.h"

void Limiter::processBuffer(unsigned char* buffer, int bufferSize){ 
    //the signal never exceeds 80% of its maximum value
    int max = 204; //max of 255 * 80%
    int min = 25; //min of 128 * 20%
    for (int i=0; i < bufferSize; i++){ //might start at 45
        if(buffer[i] > max){
            buffer[i] = max;
        }
        if(buffer[i] < min){
            buffer[i] = min;
        }
    }
}