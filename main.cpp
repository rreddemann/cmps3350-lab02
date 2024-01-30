// Ryan Reddemann
// CMPS 3350 - lab 02 is about source control
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = argc; i > 0; i--) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    return 0;
}

