#include <stdio.h>

char str1[] = "Hello";
char str2[] = "Goodbye\0 world";
    // this character \0 is the null terminator
    // 
void showstring( char *str ) {
	int i;
	int len = strlen( str );
	printf( "Length of %s is %d.\n", str, len);
	for( i = 0; i <= len; i++ ) {
		if (str[i] == '\0') {
			printf("char[%d] = NULL\n", i);
		} else {
			printf("char[%d] = %c\n", i, str[i]);
		}
	}
}

int main(int argc, char **argv) {
	showstring( str1 );
	showstring( str2 );	
	printf("%s\n", str1);   // prints Hello
	printf("%s\n", str2);   // prints Goodbye, because \0 marks the end of the string ~
    
    int i;
	int len1 = strlen( str1 );
	int len2 = strlen( str2 );
	printf("\n\n");
	for( i = 0; i <= len1; i++ ) {
        printf("%c\n", str1[i]);
	}
    for( i = 0; i <= len2; i++ ) {
        printf("%c\n", str2[i]);
	}

	return 0;
}
