#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer,
 * start from 00-00 to 23:59
 */

void jack_bauer(void)
{
	int i, j;
	int tens = 0;
	int ones = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			tens = i / 10;
			ones = i % 10;

			_putchar(tens + '0');
			_putchar(ones + '0');
			_putchar(':');

			tens = j / 10;
			ones = j % 10;

			_putchar(tens + '0');
			_putchar(ones + '0');

			_putchar('\n');
		}
	}
}



