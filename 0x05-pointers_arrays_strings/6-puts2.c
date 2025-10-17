#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the
 * first character, followed by a new line.
 * @str: sstring characters to print.
 */

void puts2(char *str)
{
	int i, count = 0;

	while (str[count] != '\0')
		count++;

	for (i = 0; i < count; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
