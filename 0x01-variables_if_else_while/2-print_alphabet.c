#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Prints out letter from a-z using for loop
  *
  *Return: 0 when successful
  */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
