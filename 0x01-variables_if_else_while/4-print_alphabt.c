#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: prints all letter from a-z but not e and q
  *
  *Return: 0 when successful
  */


int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
	}

	putchar('\n');
	return (0);
}
