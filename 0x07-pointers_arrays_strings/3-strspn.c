#include "main.h"

/**
 * _strspn - to get the length of a prefix substring
 * @s: pointer to the s
 * @accept: pointer to each byte character
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, value = 0, check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}
	if (check == 0)
		return (value);
	return (value);
}
