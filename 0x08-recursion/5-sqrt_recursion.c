#include "main.h"
/**
 * sqrt - find square root
 * @a: number
 * @i: iteration
 *
 * Return: square root
 */
int _sqrt(int a, int i)
{
	if (i * i == a)
		return (i);
	else if (i * i > a)
		return (-1);
	else
		return (_sqrt(a, i + 1));
}
/**
 * _sqrt_recursion - To find the natural square of a number
 * @n: The number under consideration
 *
 * Return: The natural square
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));	
}
