#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: To print out lower and uppercase letters
  *
  *Return: 0 when successful
  */

int main(void)
{
	char lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');
	return (0);

}
