#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack bauer
 */
void jack_bauer(void)
{
	int i, j, hourA, hourB, minA, minB;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			hourA = i / 10;
			_putchar(hourA + '0');
			hourB = i % 10;
			_putchar(hourB + '0');
			_putchar(':');
			minA = j / 10;
			_putchar(minA + '0');
			minB = j % 10;
			_putchar(minB + '0');
			_putchar('\n');
		}
	}
}
