#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0) when successful
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		else
			continue;
	}
	printf("%d\n", sum);
	return (0);
}
