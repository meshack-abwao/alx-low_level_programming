#include <stdio.h>
#include <stdlib.h>
/**
 * Main - Entry point
 *
 * prints the size of various types on the computer it is compiled and run on.
 *
 * return: Always (0) success
 */
int main(void)
/* main - entry point*/
{
	printf("Size of a char: %ld byte(s) \n", sizeof(char));
	printf("Size of an int: %ld byte(s) \n", sizeof(int));
	printf("Size of a long int: %ld byte(s) \n", sizeof(long));
	printf("Size of a long long int: %ld byte(s) \n", sizeof(long long));
	printf("Size of a float: %ld byte(s) \n", sizeof(float));

	return (0);
	/*return: always (0) success*/
}
