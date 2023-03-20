#include <stdio.h>

/*
 * main - Entry point
 *
 * prints the alphabet in lowercase followed by new line
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	char myalpha[26] = "abcdefghijklmnopqrstuvwxyz",
	int i;

	for (i = 0; i<26; i++)
	{
		putchar(myalpha[i]);
	}
	putchar('\n');
	return (0);
}
