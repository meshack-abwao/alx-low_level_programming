#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char alfabet;

	for (alfabet = 'a'; alfabet <= 'z'; alfabet++)
		_putchar(alfabet);
	_putchar('\n');
}
