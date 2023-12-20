#include "main.h"

/**
 * times_table - prints times table from 1 - 9
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (j == 0)
				_putchar('0');
			else if (mul / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}

			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
