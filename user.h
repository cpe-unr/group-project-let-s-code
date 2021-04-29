#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User{
public:
    void title(); //prints out list of user actions (w/ #ed responses)
    std::string prompt(); //prompts user and reads in response
    void getSongs(std::vector<Wav*> songs); //prints out list of user songs
    void editMetadata(std::vector<Wav*> songs); //allows user to edit the metadata of song
    void process(int process); //gets what process the user wants to do and completes process (via a call to wav)
    void save(); //export a CSV file
};

#endif