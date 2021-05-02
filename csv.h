#ifndef CSV_H
#define CSV_H

#include "GroupProj_CS202 - Sheet1.csv"
#include "wav.h"

class CSV{
	unsigned char* buffer = NULL;
	std::string data;
public:
	CSV(std::string data);
	void writeFile(const std::string &outFileName);

	unsigned char* getBuffer();
	int getBuffersize() const;
	std::string getData() const;
	void setData() const;

	virtual ~CSV();

};

#endif //CSV_H
