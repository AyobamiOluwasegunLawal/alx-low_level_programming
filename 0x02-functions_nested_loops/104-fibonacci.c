#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int a = 1, b = 2;
	unsigned long int sum = 0;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		sum = a + b;
		printf(", %lu", sum);

		a = b;
		b = sum;
	}

	putchar('\n');

	return (0);
}
