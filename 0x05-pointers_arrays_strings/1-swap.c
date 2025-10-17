#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: pointer to the address of first value.
 * @b: pointer to the address of second value.
 */

void swap_int(int *a, int *b)
{
	int *ptr1 = a;
	int *ptr2 = b;
	int temp = *ptr1;

	*ptr1 = *ptr2;
	*ptr2 = temp;
}
