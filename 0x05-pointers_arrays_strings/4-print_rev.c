#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: the input string
 */
void print_rev(char *s)
{
	int len = 0;
	char *reset = s;

	while (*s != '\0')
	{
		len += 1;
		s += 1;
	}

	while (s >= reset)
	{
		if (*s == 0)
		{
			--s;
			continue;
		}
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}
