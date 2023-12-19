#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number to be checked based on some conditions
 *
 * Return: (1) when n is greater then zero
 * (0) when n is zero and (-1) when n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (4);
}
