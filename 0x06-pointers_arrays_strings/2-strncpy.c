#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination to the copied string
 * @src: source to string
 * @n: number of charcters to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0;  i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
