#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - Prints alphabet in lowercase
 *
*/

void print_alphabet(void)
{
	char alfabet;

	for (alfabet = 'a'; alfabet <= 'z'; alfabet++)
		_putchar(alfabet);
	_putchar('\n');
}
