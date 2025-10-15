#include "main.h"

/**
 * convert_to_positive - convert negative value to positive value
 * @n: number to convert
 *
 * Return: converted n value
 */

int convert_to_positive(int num)
{

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	return (num);
}
