#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */

void print_number(int n)
{
	int div, digit;
	unsigned int num, temp;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	temp = num;
	div = 1;
	while (temp > 9)
	{
		temp /= 10;
		div *= 10;
	}

	while (div > 0)
	{
		digit = num / div;
		_putchar(digit + '0');
		num %= div;
		div /= 10;
	}

}

