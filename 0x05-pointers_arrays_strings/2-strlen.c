#include "main.h"

/**
 * _strlen - Count the total number of strings
 * @s: contains string input
 *
 * Return: number of characters
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		++count;
		s += 1;
	}
	return (count);
}
