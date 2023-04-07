#include"filehandling.h"

int main(){
    char *filename = "test.txt";

    readFileUsingfgets(filename);

    appendToFile(filename,"\nthis is appended to the file.");

    readFileUsingfgets(filename);

    writeToFile(filename,"This is a test file");

    readFileUsingfgetc(filename);

    return 0;
    
}