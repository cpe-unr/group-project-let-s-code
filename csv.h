#ifndef CSV_H
#define CSV_H

//#include ""

class CSV{
	unsigned char* buffer = NULL;
public:
	void readFile(const std::string &filename);
	void writeFile(const std::string &outFileName);

	unsigned char* getBuffer();
	int getBuffersize() const;

};

#endif //CSV_H
