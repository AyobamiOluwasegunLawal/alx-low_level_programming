#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Prints the lowercase alphabets in reverse
  *
  *Return: 0 when successful
  */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);

}

