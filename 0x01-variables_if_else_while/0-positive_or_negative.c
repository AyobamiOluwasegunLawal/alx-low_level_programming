#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
  *main - Entry point
  *
  *Description: Prints random with conditonals
  *
  *Return: (0) when when successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else
	{
		printf("is negative\n");
	}
	return (0);
}
