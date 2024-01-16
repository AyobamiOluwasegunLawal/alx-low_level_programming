#include "main.h"

/**
 * *_strdup - it returns a pointer to a newly allocated memory space in memory
 * which contains a copy of the string given as a parameter
 * @str: input string
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *copy;
	int count = 0, i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
