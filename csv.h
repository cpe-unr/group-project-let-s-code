#ifndef CSV_H
#define CSV_H

//#include "GroupProj_CS202 - Sheet1.csv"

class CSV{
	unsigned char* buffer = NULL;
public:
	void readFile(const std::string &filename);
	void writeFile(const std::string &outFileName);

	unsigned char* getBuffer();
	int getBuffersize() const;

	virtual ~CSV();

};

#endif //CSV_H
