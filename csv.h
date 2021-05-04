#ifndef CSV_H
#define CSV_H

#include "GroupProj_CS202 - Sheet1.csv"
#include "wav.h"

class CSV : public Wav{
	//unsigned char* buffer = NULL;
	std::string title;
	std::string artist;
public:
	Wav.title;
	Wav.artist;
	
	CSV(std::string title, std::string artist);
	void writeFile(const std::string &outFileName);

	//unsigned char* getBuffer();
	//int getBuffersize() const;
	std::string getTitle() const;
	std::string getArtist() const;
	void setData() const;

	virtual ~CSV();

};

#endif //CSV_H
