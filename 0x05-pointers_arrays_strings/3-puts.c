#include "main.h"

/**
 * _puts - print string to std out
 * @str: input characters
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
