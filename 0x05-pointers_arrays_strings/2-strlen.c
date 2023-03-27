#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
	int le_ngth = 0;

	while (*s != '\0')
	{
		le_ngth++;
		s++;
	}
	return (le_ngth);
}
