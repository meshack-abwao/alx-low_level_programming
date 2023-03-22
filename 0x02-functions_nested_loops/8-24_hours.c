#include <main.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h, m;

	while (h < 24)
	{
		while (m < 60)
		{
			_printchar((h / 10) +'0');
			_printchar((h % 10) + '0');
			_printchar(:);
			_printchar((m / 10) + '0');
			_printchar((m % 10) + '0');
			m++;
		}
		h++;
	}
}




