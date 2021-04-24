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
