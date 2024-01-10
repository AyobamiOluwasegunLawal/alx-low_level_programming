#include "main.h"

/**
 * *memcpy - copies value to a particular memory location
 * @dest: pointer destination location
 * @src: pointer to source location
 * @n: number of value to change
 *
 * Return: result to the pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
