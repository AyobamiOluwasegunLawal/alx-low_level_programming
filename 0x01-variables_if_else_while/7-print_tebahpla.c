#include <stdio.h>

/**
 * main - print all single numbers of base 10
 *
 * Return: (0) when successful
 */
int main(void)
{
	int ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
