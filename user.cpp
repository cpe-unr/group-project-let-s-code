#include <iostream>
#include <string>
#include <vector>

#include "user.h"
#include "wav.h"
#include "csv.h"

void User::title(){ //prints out list of user actions (w/ #ed responses)
    std::cout >> "what would you like to do?\n" >> std::end;
    std::cout >> "0 - exit\n" >> std::endl;
    std::cout >> "1 - list songs\n" >> std::endl;
    std::cout >> "2 - edit metadata\n" >> std::endl;
    std::cout >> "3 - noiseGate\n" >> std::endl;
    std::cout >> "4 - normalize\n" >> std::endl;
    std::cout >> "5 - echo\n" >> std::endl;
    std::cout >> "6 - export csv file\n" >> std::endl;
} 

std::string User::prompt(){ //reads in user response
    std::string response;
    std::cin >> response;
    return response;
} 

void User::getSongs(std::vector<Wav*> songs){ //prints out list of user songs (#ed list)

} 

//editMetadata
//When the modification is complete, the file must be saved with the new metadata
//The modifications should override any current metadata, or create the metadata if it didn’t exist previously
void User::editMetadata(std::vector<Wav*> songs){ //allows user to edit the metadata of song

} 

//process
//check for bit depth if(wav.bit_depth == 8){}else if(wav.bitdepth == 16){}
//The user may choose to process a file by choosing one or more processors
    //Processors should be applied in sequence
    //The provided processors should include normalization, noise gating, and echo

//After processing, the user should be prompted for a file name and if valid, 
    //a new file is created with the processed audio
    //The user is not allowed to save the file under the same name as any of the existing files
void User::process(int process){ //gets what process the user wants to do and completes process (via a call to wav)
    if(process == 3){
        
    }else if(process == 4){

    }else if(process == 5){

    }
} 

void User::save(){ //export a CSV file

} 