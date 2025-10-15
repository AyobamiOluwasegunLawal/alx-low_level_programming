#include <stdio.h>

/**
 * main - sum the even number of fibonacci sequence
 *
 * Return: Always 0 (success);
 */

int main(void)
{
	int a = 1, b = 2, next = 0;
	int sum = 2;

	while (1)
	{
		next = a + b;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
		{
			sum += next;
		}

		a = b;
		b = next;
	}

	printf("%d\n", sum);

	return (0);
}
