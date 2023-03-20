#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**main - entry point
*
*assigns a random number and prints the last digits of the number
*
*Return: always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = abs(n %10);
	if (last_digit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, last_digit);
	{
	else if (last_digit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (n > 0 && n < 6)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
