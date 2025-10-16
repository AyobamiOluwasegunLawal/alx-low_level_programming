#include <stdio.h>
#include <math.h>

/**
 * main - print the larges prime factor of the number (612,852,475,143)
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	int factor = 2;
	long largest = 0;

	while (n % factor == 0)
	{
		largest = factor;
		n /= factor;
	}

	for (factor = 3; factor <= sqrt(n); factor += 2)
	{
		while (n % factor == 0)
		{
			largest = factor;
			n /= factor;
		}
	}

	if (n > 2)
		largest = n;

	printf("%ld\n", largest);

	return (0);
}
