#include <stdio.h>

/* This program displays any 
 * arguments that were passed to it 
 * via cmd check below:
 * D:\CProjects\1.Basics_of_C\03_HelloWorldArgs\Debug> .\03_HelloWorldArgs.exe hello world
 * Hello World! argc=3 arg 0 is D:\CProjects\1.Basics_of_C\03_HelloWorldArgs\Debug\03_HelloWorldArgs.exe
 * Hello World! argc=3 arg 1 is hello
 * Hello World! argc=3 arg 2 is world
 */

int main(int argc, char **argv) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("Hello World! argc=%d arg %d is %s\n", argc, i, argv[i]);	// prints arg at index i
	}
	return 0;
}
