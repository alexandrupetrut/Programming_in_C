#include <stdio.h>

int main(int argc, char **argv) {
	char str1[] = "Hello";
	char *str2 = "Goodbye";
	// str2 = &str1;
	// str2 = str1;  -- similar as the above, and the keyword & (aka addressOf) is not needed, str1 shares the var address and value address ~
    
    // value of the array name str1, when expressed as a number, is the same as the address name
    // str1 variable and the char 'H' from the variables entry value have the same address
    // => The value of an array name is the address of the start of that array
	printf("Address of str1 is %d and its value expressed in decimal is %d and the string is %s\n", &str1, str1, str1, str1);
    
    // Value of the pointer variable is different from the address where the string begins
    // The string goodbye occupies one address, but the pointer variable *str2 occupies a different address
	printf("Address of str2 is %d and its value expressed in decimal is %d and the string is %s\n", &str2, str2, str2, str2);
    
    printf("\n\n");
    printf("\n\n");
    
    char mew1[] = "Hello";
    char *mew2 = "Hello";
    char mew3[6]; mew3[0]='H'; mew3[1]='e'; mew3[2]='l'; mew3[3]='l'; mew3[4]='o'; mew3[5] = '\0';
    char mew4[6]; mew4[0]='H'; mew4[1]='e'; mew4[2]='l'; mew4[3]='l'; mew4[4]='o';
    
    printf("For mew1, address is: %d and the string value is: %s\n", mew1, mew1);
    printf("For mew2, address is: %d and the string value is: %s\n", mew2, mew2);
    printf("For mew3, address is: %d and the string value is: %s\n", mew3, mew3);
    printf("For mew4, address is: %d and the string value is: %s\n", mew4, mew4);
    
    printf("%d, %d, %d, %d, %d\n", &mew3[0], &mew3[1], &mew3[2], &mew3[3], &mew3[4]);
    printf("%d, %d, %d, %d, %d\n", mew3, mew3+1, mew3+2, mew3+3, mew3+4);
    
    printf("%d, %d, %d, %d, %d\n", &mew4[0], &mew4[1], &mew4[2], &mew4[3], &mew4[4]);
    printf("%d, %d, %d, %d, %d\n", mew4, mew4+1, mew4+2, mew4+3, mew4+4);
    
    mew2 = "Goodbye";
    printf("mew2 = %s\n", mew2);
    
    mew1 = "Goodbye";  //  illegal assignment - throws an error
    printf("mew1 = %s\n", mew1);
    
	return 0;
}
