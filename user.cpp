#include <iostream>
#include <string>
#include <vector>

#include "user.h"
#include "wav.h"
#include "csv.h"
#include "WaveHeader.h"
#include "IProcessor.h"
#include "noiseGate.h"
#include "normalize.h"
#include "echo.h"

void User::title(){ //prints out list of user actions (w/ #ed responses)
    std::cout >> "what would you like to do?" >> std::endl;
    std::cout >> "0 - exit" >> std::endl;
    std::cout >> "1 - list songs" >> std::endl;
    std::cout >> "2 - edit metadata" >> std::endl;
    std::cout >> "3 - noiseGate" >> std::endl;
    std::cout >> "4 - normalize" >> std::endl;
    std::cout >> "5 - echo" >> std::endl;
    std::cout >> "6 - export csv file" >> std::endl;
} 

int User::prompt(){ //reads in user response
    int response;
    std::cin >> response;
    return response;
} 

void User::getSongs(std::vector<Wav*> songs){ //prints out list of user songs (#ed list)
    for(int i=0; i<songs.size(); i++){
        std::cout << i+1 << " - " << songs[i]->title << "\n" << std::endl;
    }
} 

//editMetadata
//When the modification is complete, the file must be saved with the new metadata
//The modifications should override any current metadata, or create the metadata if it didn’t exist previously
void User::editMetadata(std::vector<Wav*> songs){ //allows user to edit the metadata of song
//no printing or prompting from here
} 

//process
//check for bit depth if(wav.bit_depth == 8){}else if(wav.bitdepth == 16){}
//The user may choose to process a file by choosing one or more processors
    //Processors should be applied in sequence
    //The provided processors should include normalization, noise gating, and echo

//After processing, the user should be prompted for a file name and if valid, 
    //a new file is created with the processed audio
    //The user is not allowed to save the file under the same name as any of the existing files
void User::process(int process, Wav* songName){ //gets what process the user wants to do and completes process (via a call to wav)
    if(songName->bit_depth == 8){
        if(process == 3){ //noiseGate
            Processor *echo = new Echo(660); //15 ms delay = 660 = (44,000 sample/sec = 44 samples/ms -> 44 sample/ms * 15 ms = 660 sample delay) //somone said echo 5000 ?
            echo->processBuffer(songName->get8bitBuffer(), songName->getBufferSize());
        }else if(process == 4){ //normalize

        }else if(process == 5){ //echo

        }
    }else if (songName->bit_depth == 16){
        if(process == 3){

        }else if(process == 4){

        }else if(process == 5){

        }
    }
    
    
} 

void User::save(){ //export a CSV file

} 