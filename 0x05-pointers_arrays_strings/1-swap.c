#include "main.h"

/**
 *swap_int - swap the values of two integers
 * @a: integer to be swapped
 * 2b: integer to swap
*/
void swap_int(int *a, int *b)
{
	int i;
	
	i = *a;
	*a = *b;
	*b = i;
}
