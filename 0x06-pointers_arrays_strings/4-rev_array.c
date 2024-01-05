#include "main.h"

/**
 * reverse_array - To reverse an arr of of integers
 * @a: pointer to arr
 * @n: number of element
 */
void reverse_array(int *a, int n)
{
	int i, temp, len = 0;

	while (a[len] != '\0')
	{
		len++;
		a++;
	}
	for (i = 0; i <= n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
