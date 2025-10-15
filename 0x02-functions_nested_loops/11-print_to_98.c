#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98.
 * @n: starting number value (n-98)
 */

void print_to_98(int n)
{
	int num, temp, div, digit;

	while (1)
	{
		num = n;
		if (num < 0)
		{
			_putchar('-');
			num = -n;
		}
		temp = num;
		div = 1;

		while (temp >= 10)
		{
			temp  /= 10;
			div *= 10;
		}

		while (div > 0)
		{
			digit = num / div;
			_putchar(digit + '0');
			num %= div;
			div /= 10;
		}

		if (n == 98)
			break;

		_putchar(',');
		_putchar(' ');

		if (n < 98)
			n++;
		else
			n--;
	}

	_putchar('\n');
}

