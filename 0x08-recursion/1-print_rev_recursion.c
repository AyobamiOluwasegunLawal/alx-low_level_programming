#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse order
 * @s: The string to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	--s;
	_putchar(*s);
}
