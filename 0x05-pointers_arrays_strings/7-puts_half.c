#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to cut in half"
 */

void puts_half(char *str)
{
	int i, count = 0;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 0)
	{
		for (i = (count / 2); i < count; i++)
			_putchar(str[i]);
	}
	else
	{

		for (i = (count - 1) / 2; i < count; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
