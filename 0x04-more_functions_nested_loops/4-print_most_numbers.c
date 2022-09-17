#include "main.h"

/**
  * print_most_numbers - print most numbers but skip 2 and 4
  *
  * Return: void
  */

void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		if (digit == 50 || digit == 52)
		{
			continue;
		}

		_putchar(digit);
	}

	_putchar('\n');
}
