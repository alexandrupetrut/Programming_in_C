#include <stdio.h>

#define STRLEN 5

/*
int readln(char s[], int maxlen) {
	int len_s;
	fgets(s, maxlen, stdin);
	len_s = strlen(s);
	if (s[len_s - 1] == '\n') {
		s[len_s - 1] = '\0';
		len_s -= 1;
	}
	rewind(stdin); // This flushes the keyboard buffer (on Windows anyway!)
	return len_s;
}
*/
 
int readln(char s[], int maxlen) {
	char ch;
	int i;
	int chars_remain;
	i = 0;
	chars_remain = 1;
    // while loop continues getting chars as long as there are chars to be processed
	while (chars_remain) {
		ch = getchar();
		if ((ch == '\n') || (ch == EOF) ) {
			chars_remain = 0;
		} else if (i < maxlen - 1) {
			s[i] = ch;
			i++;
		}
	}
    // so the loop stops running when a new line or EOF is found, before or after adding chars to s[]
    // so i put a null char at the end to mark the end of the string ~ and return the length of the string (i)
	s[i] = '\0';
	return i;
} 

int main(int argc, char **argv) {
	char firstname[STRLEN];
	char lastname[STRLEN];
	int len_firstname;
	int len_lastname;
	printf("Enter your first name:");
	len_firstname = readln(firstname, STRLEN);
	printf("Enter your last name:");
	len_lastname = readln(lastname, STRLEN);
	printf("Hello, %s, %s\n", firstname, lastname);
	printf("Length of firstname = %d, lastname = %d", len_firstname, len_lastname);
}
