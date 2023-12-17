#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: always (0) when successful
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
