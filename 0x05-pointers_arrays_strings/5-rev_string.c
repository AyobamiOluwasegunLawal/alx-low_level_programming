#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to reverse.
 */

void rev_string(char *s)
{
	int i, j, count = 0;
	char temp;

	while (s[count] != '\0')
		count++;

	j = count - 1;
	for (i = 0; i <= j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

	_putchar('\n');
}
