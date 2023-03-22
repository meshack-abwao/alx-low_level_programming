#include "main.h"

/**
 * _isalpha: checks if a letter is lowercase
 * @c: is the character to be checked
 * Returns: 1 if c is a letter and 0 otherweise
 */

int _isalpha(int c)
{
	if ((c >= 'a', c <= 'z') || (c >= 'A', c <= 'Z'))
		return 1;
	else
		return 0;
}
