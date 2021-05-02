#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "wav.h"
#include "user.h"

#define MIN_ARGS 2

int driver(int argc, char const *argv[]){
    std::ifstream fin;
    int numOfFiles;
    std::vector<Wav*> songs; //vector af wav pointers

    //check for correct usage / make sure there are files to be opened
    if (argc < MIN_ARGS) {
        std::cout << "Correct usage:" << std::endl;
        std::cout << argv[0] << " /.filename (as many files as you want)" << std::endl;
        return 0;
    }
    
    numOfFiles = argc-1; 
    for(int i=1; i<numOfFiles; i++){ //"read in" each file one at a time
        fin.open(argv[i]); //open file and check for opening
        if((fin.is_open()) == false){
            std::cout << "File " << argv[i] << "could not be opened" << std::endl;
            return 0; //could throw an exception here? that way we can continue to work with the files that *could* be opened
        }
        
        Wav *wav = new Wav(); 
        wav->readFile(argv[i]); //read in file
        songs.emplace_back(wav); //object holding the information should be added to an appropriate data structure
    }

    //user interactions (mainly call other functions)
    User user;
    int action;
    do{
        user.title();
        user.prompt();

        switch(action){
            case 0: //exit application
                return 0;
            case 1: //list songs
                user.getSongs(songs); 
            case 2: //edit metadata
                user.editMetadata(songs);
            case 3:
                //need extra method calls to get the song to pass in
                //give it the songs vector index (songs[i])
                user.process(3, song);
            case 4:
                user.process(4, song);
            case 5:
                user.process(5, song);
            case 6: 
                user.save();
            default:
                std::cout << "that is not a valid action. please choose again\n" << std::endl;
        }
    }while(action != 0); //while the user does not choose to exit

    //close audio files
    for(int i=1; i<numOfFiles; i++){
        fin.close();
        delete songs[i-1]; //sound file data (sound buffer, etc) should be deleted from the heap (NOT DISK!)
    }
    return 0;
}