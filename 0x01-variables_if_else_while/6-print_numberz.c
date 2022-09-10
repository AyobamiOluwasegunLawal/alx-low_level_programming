#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Print all single digit of base 10
  *
  *Return: 0 when successful
  */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');
	return (0);
}
