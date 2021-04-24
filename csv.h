#ifndef CSV_H
#define CSV_H

//#include ""

class CSV{
public:
	void readFile(const std::string &filename);
	void writeFile(const std::string &outFileName);
private:
	unsigned char* buffer = NULL;

public:
	unsigned char* getBuffer();
	int getBuffersize() const;
	
};

#endif //CSV_H
