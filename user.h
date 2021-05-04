
#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include "wav.h"

class User{
public:

	/**
	* Prints out the list of the users possible actions
	*/
    void title(); //prints out list of user actions (w/ #ed responses)

	/**
	* Reads in the users response
	*/
    int prompt(); //prompts user and reads in response

	/**
	* Prints out a list of the users, using a for loop
	* @param songs - stores the songs as a vector
	*/
    void getSongs(std::vector<Wav*> songs); //prints out list of user songs

	/**
	* Allows user to edit the meta data of the song
	* @param songs - stores the songs as a vector
	*/
    void editMetadata(std::vector<Wav*> songs); //allows user to edit the metadata of song

	/**
	* Gets what process the user wants to do and completes it by calling to wav
	* @param process - stores process as integers
	* @param songName - uses wav pointer to complete process
	*/
    void process(int process, Wav* songName); //gets what process the user wants to do and completes process (via a call to wav)

	/**
	* Exports CSV file
	*/
    void save(); //export a CSV file
};

#endif
