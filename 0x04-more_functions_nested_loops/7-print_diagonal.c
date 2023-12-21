#include "main.h"

/**
 * print_diagonal - print the \ diagonally
 * @n: nober of \ to print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j != i && j <= i)
				{
					_putchar(' ');
				} else if (j == i && j <= i)
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
}
