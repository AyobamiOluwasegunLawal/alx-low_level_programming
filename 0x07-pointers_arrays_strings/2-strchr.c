#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: pointer o the first occurance of the the character
 * @c: character
 *
 * Return: a pointer to the first ocurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
