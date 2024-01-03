#include "main.h"

/**
 * rev_string - Reverses string
 * @s: input pointer to string
 */
void rev_string(char *s)
{
	char temp;
	int i = 0, len = 0;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
