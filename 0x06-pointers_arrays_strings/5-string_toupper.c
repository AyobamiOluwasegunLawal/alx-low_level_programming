#include "main.h"

/**
 * *string_toupper - converts lowercase letters to uppercase
 * @c: character input
 *
 * Return: upper characters
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; (c[i] != '\0'); i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
