#include "main.h"

/**
 * print_numbers - to print numbers from 0 - 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
