#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string
 * Retuurn: 0
*/

void print_rev(char *s)
{
	int len_gth = 0;
	int i;

	while (*s != '\0')
	{
		len_gth++;
		s++;
	}
	s--;
	for (i = len_gth; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
