#include <stdio.h>

/**
 * main - print alphabet in lowercase except q and e
 *
 * Return: (0) when successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
