#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Prints all base 10 numbers
  *
  *Return: 0 when successful
  */

int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
	{
		printf("%d", base10);
	}

	printf("\n");
	return (0);
}
