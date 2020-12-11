#include <stdio.h>

// char str1[] => char array gives the address where the string begins aka address of first character in that array
// char *str2  => pointer does not indicate the address of the start of the array, but stores a 'reference' to the address

int main(int argc, char **argv) {
	char str1[] = "Hello";
	char *str2 = "Goodbye";
	printf("%d %s\n", str1, str1);
	printf("%d %s\n", str2, str2);
	// str2 = &str1;
	str2 = str1;
	printf("%d %s\n", str1, str1);
	printf("%d %s\n", str2, str2);
	printf("str1[] - Address of str1=%d, str1(int)=%d, str1(string)=%s,\n*str2 -  Address of str2=%d, str2(int)=%d, str2(string)=%s",&str1, str1, str1, &str2, str2, str2 );
	
	return 0;
}
