#include "main.h"

/**
 * *_strncat - funtion to concat two strings
 * @dest: pointer to first input string
 * @src: pointer to second input string
 * @n: number of character
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
