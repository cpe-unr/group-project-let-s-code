#ifndef WAV_H
#define WAV_H
/*
 * This class is designed to work with PCM 8-bit mono wavefiles.
 * It makes many assumptions about the format of the wave as a result.
 * It will NOT work with stereo files or any other bit-depth than 8 bits.
 */
#include "WaveHeader.h"

class Wav {
public:
    void readFile(const std::string &fileName);
    void writeFile(const std::string &outFileName);
private:
    unsigned char* buffer = NULL;
    wav_header waveHeader;
public:
    virtual ~Wav();

public:
    unsigned char *getBuffer();
    int getBufferSize() const;
};


#endif

/////////////////////////////
/*
#ifndef WAV_H
#define WAV_H

//#include ""

class Wav{
public:
	void readFile(const std::string &filename);
	void writeFile(const std::string &outFileName);
private:
	unsigned char* buffer = NULL;

public:
	unsigned char* getBuffer();
	int getBuffersize() const;
	
};

#endif //WAV_H
*/