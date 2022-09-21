#include "main.h"
#include <string.h>

/**
  * _puts - function name
  * @str: parameter 1
  *
  * Return: void
  */

void _puts(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
