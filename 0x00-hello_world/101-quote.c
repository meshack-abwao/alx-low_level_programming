#include <stdio.h>
#include <stdlib.h>

/* main - Entry point
*
* prints exactly and that piece of art is useful\" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
*
*return: Always 1 (success)
*/
int main(void)
{
	char message{} = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(STDOUT_FILENO, message, sizeof(message) - 1);
	return (0);
}

