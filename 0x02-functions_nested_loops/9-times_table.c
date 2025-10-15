#include "main.h"
#include "main.h"

/**
 * times_table - prints the 9 times table stating with 0.
 */

void times_table(void)
{
	int i;
	int j;
	int mul;
	int tens = 0;
	int ones = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;

			if (mul < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}

				_putchar(mul + '0');
			}
			else
			{
				tens = mul / 10;
				ones = mul % 10;

				_putchar(tens + '0');
				_putchar(ones + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}

}
