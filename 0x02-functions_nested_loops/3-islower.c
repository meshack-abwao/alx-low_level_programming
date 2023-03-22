#include "main.h"
/**
 * main - Entry point
 *
 * _islower checks if a character (c) is lower case
 *
 * Return: Always 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
