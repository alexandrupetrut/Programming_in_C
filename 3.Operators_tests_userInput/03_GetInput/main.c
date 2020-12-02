#include <stdio.h>

// function written to deal with a specific problem 
// problem => fgets gets from buffer and remaining chars are waiting in the backlog to be processed
// all it does is it reads through the remaining characters in the buffer up until it finds a new line or eof
void flush_input(){
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF); 
}

void getinput_with_gets() {
	char firstname[5];
	char lastname[5];
	printf("Enter your first name:");
	gets(firstname);
	printf("Enter your last name:");
	gets(lastname);
	printf("Hello, %s, %s\n", firstname, lastname);
}


void getinput_with_fgets() {
	char firstname[5];
	char lastname[5];
	printf("Enter your first name:");
	fgets(firstname, 5, stdin); 	 // for 'abcde' , firstname consists of 'a', 'b', 'c', 'd', '\0' (special null char marking end of string)
	printf("Enter your last name:");
	// fflush(stdin);	// This function may not (invariably) work with input!
	flush_input(); 	// custom built buffer flush
	fgets(lastname, 5, stdin);
	flush_input();
	printf("Hello, %s, %s\n", firstname, lastname);
}

int main(int argc, char **argv) {
	// getinput_with_gets();
	getinput_with_fgets();
	return 0;
}
