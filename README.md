# CS 202 Semester Project Template

NOTES
*create LOTS of functions

UML: name, attributes, function names w/ return type

Assignments:
All 
- driver (add sudo code and put in you own calls with MANY comments)
- makefile, update when you create your classes

Paige
- WAV files (read in)
- audio processors
- UML diagram

Annie
- CSV file (generation)
- if the user choses to change the metadata

Tanner
- user interactions 
- documentation w/ doxygen (paige will give UML diagram)
--------------------------------------------------------------------------------------------------------------
Ideas:
- class for the wav files (reading in and such)
- class that creates the CSV file

idk ideas:
- interface for printable: prints out all the commands that should promp the user?

--------------------------------------------------------------------------------------------------------------
sudo code/project breakdown:
    read in each file one at a time
    extract all the technical information (sample rate, etc.) and metadata
    object holding the information should be added to an appropriate data structure
    sound file data (sound buffer, etc) should be deleted from the heap (NOT DISK!)

    When all the files are read and processed, the user can choose to modify the metadata of any file
    When the modification is complete, the file must be saved with the new metadata
    The modifications should override any current metadata, or create the metadata if it didn’t exist previously

    The user may choose to process a file by choosing one or more processors. Processors should be applied in sequence. The provided processors should include normalization, noise gating, and echo
    After processing, the user should be prompted for a file name and if valid, a new file is created with the processed audio
    The user is not allowed to save the file under the same name as any of the existing files

    If the user chooses to do so, a CSV file can be exported listing all the files, their technical information (sample rates, etc.), and the file metadata. 
    If no metadata exists, the phrase “No metadata present” should be included in the description for that file