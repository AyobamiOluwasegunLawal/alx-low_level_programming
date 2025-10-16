#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int i, j, num, temp, div, digit;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			temp = j;
			div = 1;
			while (temp > 9)
			{
				temp /= 10;
				div *= 10;
			}

			num = j;
			while (div > 0)
			{
				digit = num / div;
				_putchar(digit + '0');
				num %= div;
				div /= 10;
			}
		}

		_putchar('\n');
	}
}
