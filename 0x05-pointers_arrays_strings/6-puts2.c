#include "main.h"

/**
 * puts2 - To print even numbers from a range of integers
 * @str: pointer to the range of integers
 */
void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		if (len % 2 != 0)
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
