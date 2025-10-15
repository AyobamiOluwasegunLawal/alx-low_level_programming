#include "main.h"

/**
 * print_times_table - prints the times table, starting with 0.
 * @n: number of times-table to print
 */

void print_times_table(int n)
{
	int i, j, mul, temp, div, digit, num;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (mul < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (mul < 100)
					_putchar(' ');
			}
			temp = mul;
			div = 1;
			while (temp > 9)
			{
				temp /= 10;
				div *= 10;
			}
			num  = mul;
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
