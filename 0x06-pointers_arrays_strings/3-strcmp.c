#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: (0) when successful
 * (-) when value of str1 is less than str2
 * (+) when value of str1 is greater than str2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

