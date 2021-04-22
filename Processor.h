//
// Created by Keith Lancaster on 3/13/21.
//

#ifndef PROGRAMMING_ASSIGNMENT_3KL_PROCESSOR_H
#define PROGRAMMING_ASSIGNMENT_3KL_PROCESSOR_H


#include <cstdint>
#include <cmath>

class Processor {
public:
    virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;
};


#endif //PROGRAMMING_ASSIGNMENT_3KL_PROCESSOR_H
