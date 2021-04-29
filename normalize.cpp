#include "normalize.h"

void Normalize::processBuffer(unsigned char* buffer, int bufferSize, int bitSize, bool signEd){
    //get highest value
    int max_vol = 0;
    for (int i=0; i < bufferSize; i++){
        if(buffer[i] > max_vol){
            max_vol = buffer[i];
        }
    }

    double scale = bitSize / max_vol;

    //normalize function
    for (int i=0; i < bufferSize; i++){
        buffer[i] = buffer[i] * scale;
    }
}

void Normalize::processBuffer(short buffer[], int bufferSize, int bitSize, bool signEd){
    //get highest value
    int max_vol = 0;
    for (int i=0; i < bufferSize; i++){
        if(buffer[i] > max_vol){
            max_vol = buffer[i];
        }
    }

    double scale = bitSize / max_vol;

    //normalize function
    for (int i=0; i < bufferSize; i++){
        buffer[i] = buffer[i] * scale;
    }
}