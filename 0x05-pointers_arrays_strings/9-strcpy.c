#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * the terminating null byte (\0);
 * @dest: pointer to destination of the copied string.
 * @src: pointer to the string to copy.
 *
 * Return: the string in the destination address.
 */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	while (src[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
		dest[i] = src[i];

	dest[count] = '\0';

	return (dest);
}
