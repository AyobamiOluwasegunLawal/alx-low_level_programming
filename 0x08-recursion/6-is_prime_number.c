#include "main.h"

/**
 * _prime - find prime number
 * @a: the number
 * @i: the iterator
 *
 * Return: (1) when prime and (0) when not
 */
int _prime(int a, int i)
{
	if (a <= 1 || (!(a % i) && (i > 1)))
		return (0);
	else if ((a / i) < i)
		return (1);
	else
		return (_prime(a, i + 1));
}
/**
 * is_prime_number - check the number
 * @n: the input number
 *
 * Return: (1) when success
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
