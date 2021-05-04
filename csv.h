#ifndef CSV_H
#define CSV_H

#include "GroupProj_CS202 - Sheet1.csv"
#include "wav.h"

class CSV : public Wav{
	//unsigned char* buffer = NULL;
	std::string title;
	std::string artist;
public:
	//Wav.title;
	//Wav.artist;
	
	CSV(std::string title, std::string artist);

	/**
	* Checks to see if the file opened, and then records the data in the file
	* @param outFileName - stored as string
	*/
	void writeFile(const std::string &outFileName);

	//unsigned char* getBuffer();
	//int getBuffersize() const;

	/**
	* Gets song title as a string
	*/
	std::string getTitle() const;

	/**
	* Gets song artist as a string
	*/
	std::string getArtist() const;

	/**
	* Sets the data
	*/
	void setData() const;

	/**
	* checks to see if the buffer is not null, if it is it deletes the buffer
	*/
	virtual ~CSV();

};

#endif //CSV_H
