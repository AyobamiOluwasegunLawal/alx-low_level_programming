#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the destination of the copies char
 * @src: string to copy.
 * @n: the limit to copy.
 *
 * Return: copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
