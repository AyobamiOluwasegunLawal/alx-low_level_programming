#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: takes address of first variable
 * @b: takes address of second variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
