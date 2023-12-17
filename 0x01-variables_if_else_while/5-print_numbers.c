#include <stdio.h>

/**
 * main - print all single numbers of base 10
 *
 * Return: (0) when successful
 */
int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
