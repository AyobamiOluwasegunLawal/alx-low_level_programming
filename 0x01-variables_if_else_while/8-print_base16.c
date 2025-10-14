#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 on success
 */

int main(void)
{
	int num = 0;
	char alphabet = 'a';

	while (num < 16)
	{
		if (num >= 10)
		{
			putchar(alphabet);
			alphabet++;
			num++;
		}
		else
		{
			putchar(num + '0');
			num++;
		}
	}

	putchar('\n');

	return (0);
}
