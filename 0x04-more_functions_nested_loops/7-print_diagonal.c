#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of lines to draw
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i > j)
				_putchar(' ');

			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
				break;
			}
		}
	}
}
