#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * prints numbers from 0-9
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
