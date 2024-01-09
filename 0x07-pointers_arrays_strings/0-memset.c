#include "main.h"

/**
 * *_memset - function to fill the first n bytes of the memory area
 * @s: pointer to the memory location
 * @b: value to be passed to the memory location
 * @n: range of memory to be changed
 *
 * Return: The new value to the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
