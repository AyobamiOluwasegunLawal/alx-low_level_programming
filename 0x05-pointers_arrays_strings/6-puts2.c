#include "main.h"

/**
 * puts2 - To print even numbers from a range of integers
 * @str: pointer to the range of integers
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
			_putchar(*str);
		else
		{
			str += 1;
			continue;
		}
		str += 1;
	}
	_putchar('\n');
}
