#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	char alphabet = 'a';

	while (true)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
			continue;
		}

		putchar(alphabet);

		if (alphabet == 'z')
		{
			break;
		}

		alphabet++;
	}

	putchar('\n');

	return (0);
}
