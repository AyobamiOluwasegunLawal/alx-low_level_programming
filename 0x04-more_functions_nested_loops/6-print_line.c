#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of lines to be drawn
 */
void print_line(int n)
{
	int no = 1;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		while (no <= n)
		{
			_putchar('_');
			no++;
		}
		_putchar('\n');
	}
}
