#ifndef WAV_H
#define WAV_H

#include "WaveHeader.h"

class Wav : public wav_header{
	unsigned char* buffer = NULL; //make a template
    wav_header waveHeader;
public:
    void readFile(const std::string &fileName);
    void writeFile(const std::string &outFileName);

	unsigned char *get8bitBuffer();
	short *get16bitBuffer();

    int getBufferSize() const;

	virtual ~Wav();
};

#endif