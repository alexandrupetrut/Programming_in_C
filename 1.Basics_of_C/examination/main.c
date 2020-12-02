#include <stdio.h>

// int argc = count of arguments (bits of data sent to the program)
// argc is automatically calculated as the number of arguments parsed to main

// char **argv  => referring to an array that's a sequential list of char strings
// similar to char *argv[]
int main(int argc, char** argv)
{
    int i;
    for(i = 0; i < argc; i++) {
        printf("Hello World! argc=%d arg %d is %s\n", argc, i, argv[i]);
    }
    return 0;
}
