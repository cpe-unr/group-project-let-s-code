#include <iostream>
#include <vector>
#include <string>
#include <fstream>
//#include <sstream>

#include "wav.h"

#define MIN_ARGS 2

int driver(int argc, char const *argv[]){
    std::ifstream fin;
    int numOfFiles;
    std::vector<Wav*> songs; //vector af wav pointers

    //check for correct usage / make sure there are files to be opened
    if (argc < MIN_ARGS) {
        std::cout << "Correct usage:" << std::endl;
        std::cout << argv[0] << " filename (as many files as you want)" << std::endl;
        return 0;
    }
    
    numOfFiles = argc-1; 
    for(int i=1; i<numOfFiles; i++){ //read in each file one at a time
        fin.open(argv[i]); //open file and check for opening
        if((fin.is_open()) == false){
            std::cout << "File " << argv[i] << "could not be opened" << std::endl;
            return 0; //could throw an exception here? that way we can continue to work with the files that *could* be opened
        }
        //check for bit depth
        //read in files here --> 
        //object holding the information should be added to an appropriate data structure
    }


    //user interactions (mainly call other functions)
    do{
//the user can choose to modify the metadata of any file

//The user may choose to process a file by choosing one or more processors
    //Processors should be applied in sequence
    //The provided processors should include normalization, noise gating, and echo

//After processing, the user should be prompted for a file name and if valid, 
    //a new file is created with the processed audio
    //The user is not allowed to save the file under the same name as any of the existing files

//If the user chooses to do so, a CSV file can be exported

    }while(); //while the user does not choose to exit


//When the modification is complete, the file must be saved with the new metadata
//The modifications should override any current metadata, or create the metadata if it didn’t exist previously



//sound file data (sound buffer, etc) should be deleted from the heap (NOT DISK!)

    //close audio files
    for(int i=1; i<numOfFiles; i++){
        fin.close();
    }
    return 0;
}