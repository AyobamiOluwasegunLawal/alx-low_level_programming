#include "main.h"

/**
  *print_alphabet_x10 - Entry point
  *
  */

void print_aalphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');

	}
}

