#include "main.h"

/**
 * _isdigit - checkes for digit through 0-9
 * @c: digits that would be checked
 *
 * Return: (1) when digit is found
 */
int _isdigit(int c)
{
	if (c >= '0' && c < '9')
		return (1);
	else
		return (0);
}
