#include <main.h>

int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * main - Entry point
 *
 * prints _putchar on the screen
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        _putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
        return (0);
}

