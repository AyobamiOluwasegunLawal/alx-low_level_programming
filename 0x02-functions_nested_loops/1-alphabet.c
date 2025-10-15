#include "main.h"

/**
 * print_alphabet - Print out alphabet from a-z in lowercase
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}

