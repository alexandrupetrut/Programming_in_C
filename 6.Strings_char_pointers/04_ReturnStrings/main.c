#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAXSTRLEN 100

char greeting[MAXSTRLEN];

char * string_function_dynamic(char *astring) {
	char *s;
    
    // malloc = memory allocation - allocates space in the Heap, 
    // variables allocated here continue to exist even after exiting the function where they are declared
	s = (char*)malloc(MAXSTRLEN); // The cast (char*) may be needed by some compilers
    
    // initialize a string that contains no printable characters, despite having a null terminator
	s[0] = 0;		// need this to initialize the buffer created by malloc, same effect as assigning a null char: s[0] = '\0';
    
    // s is an empty string with a null terminator (necessary for all strings) so now it can be used ~
    // we cannot concatenate using a pointer that doesn't point to a char array / string without null terminator
	strcat(s, "hello ");
	strcat(s, astring);
	strcat(s, "\n");
	return s;
}

char * string_function(char astring[]) {
    // strcat(destination_string, source_string);
	strcat(greeting, "hello ");
	strcat(greeting, astring);
	strcat(greeting, "\n");
	return greeting;
}

int main(int argc, char **argv) {
	printf(string_function("Fred"));
	printf(string_function_dynamic("Mary"));
	return 0;
}
