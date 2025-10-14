#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int num = 0;

	while (true)
	{
		if (num < 10)
		{
			printf("%d", num);
		}
		else
		{
			break;
		}

		num++;
	}

	putchar('\n');

	return (0);
}
