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
	int i, len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	for (i = 0; i < n; i++)
	{
		dest[len1] = src[i];
	}
	len1 = 0;
	len2 = 0;
	return (dest);
}
