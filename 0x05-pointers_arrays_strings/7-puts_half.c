#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd then, n = (length_of_the_string -1)/2
 * @str: input
 * Return: half of input
*/

void puts_half(char *str)
{
	int a, n, len_gth;

	len_gth = 0;

	for (a = 0; str[a] != '\0', a++)
	{
		len_gth++;
	}
	n = (len_gth / 2);
	if ((len_gth % 2) == 1)
	{
		n = ((len_gth + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
