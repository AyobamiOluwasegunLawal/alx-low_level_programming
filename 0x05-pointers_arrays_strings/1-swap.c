#include "main.h"

/**
  * swap_int - a function call
  *
  * @a: parameter 1
  * @b: parameter 2
  *
  * Description: this function swaps integers
  */

void swap_int(int *a, int *b)
{
	int swapOne;

	swapOne = *a;
	*a = *b;
	*b = swapOne;
}
