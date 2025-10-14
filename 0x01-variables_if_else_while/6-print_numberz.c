#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int num = 48;

	while (true)
	{
		if (num <= 57)
		{
			putchar(num);
			num++;
		}
		else
		{
			break;
		}
	}

	putchar('\n');

	return (0);
}

