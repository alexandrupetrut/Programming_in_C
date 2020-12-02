#include <stdio.h>

int main(int argc, char **argv) {
	printf("hello world\n");
	puts("hello world again\n");  
    puts("cool"); // --> has \n at the end by default
    // format specifiers preceded by % can be used in printf, not in puts
	printf("There are %d bottles standing on the %s.\n", 20, "wall" );
	return 0;
}
