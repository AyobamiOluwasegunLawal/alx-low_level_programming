#include "main.h"

/**
 * *create_array - creates an array of chars
 and initializes it with a specific char.
 * @size: size of the array
 * @c: contain character
 *
 * Return: pointer to the array or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for(i = 0; i < (int) size; i++)
		arr[i] = c;
	return (arr);
}
