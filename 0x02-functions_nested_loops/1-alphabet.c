#include "main.h"

/***
 * print_alphabet - prints all alphabet in lowercase
*/

void print_alphabet(void)
{
	char alfabet;

	for (alfabet = 'a'; alfabet <= 'z'; alfabet++)
		_putchar(alfabet);
	_putchar('\n');
}
