#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: pointer to the dest location.
 * @src: location to source location.
 *
 * Return: single concat string.
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;

	while (src[i] != '\0')
		i++;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i + 1] = '\0';
	return (dest);
}
