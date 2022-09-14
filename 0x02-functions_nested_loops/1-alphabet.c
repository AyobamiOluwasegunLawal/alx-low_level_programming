#include "main.h"

/**
  *print_alphabet - Entry point
  *
  *Description: This calls a function that prints out letter form a-z
  *
  *Return: (0) when successful
  */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

