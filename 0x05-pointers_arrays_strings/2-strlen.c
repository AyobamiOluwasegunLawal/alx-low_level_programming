#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to count.
 *
 * Return: count value of s result.
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count += 1;
	}

	return (count);
}
