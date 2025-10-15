#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to get the last digit.
 *
 * Return: last digit of n.
 */

int print_last_digit(int n)
{
	int lastDigit = 0;

	if (n < 0)
	{
		lastDigit = (n % 10) * -1;
		_putchar(lastDigit + '0');
	}
	else if (n == 0)
	{
		_putchar(lastDigit + '0');
	}
	else
	{
		lastDigit = n % 10;
		_putchar(lastDigit + '0');
	}
	return (lastDigit);
}
