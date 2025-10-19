#include "main.h"

/**
 * _strncat - concatenates two string with limit
 * @dest: destination to concat string
 * @src: the source to get the string
 * @n: numeber of byte.
 *
 * Return: string concatenated.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
