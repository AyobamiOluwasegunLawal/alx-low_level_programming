#include "main.h"

/**
  * print_numbers - this prints number from 0-9
  *
  * Return: void
  */

void print_numbers(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
