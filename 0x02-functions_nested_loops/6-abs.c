#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to operate on
 *
 * Return: absolute value;
 */
int _abs(int n)
{
	int abs;

	if (n < 0)
		abs = -1 * (n);
	else
		abs = n;
	return (abs);
}
