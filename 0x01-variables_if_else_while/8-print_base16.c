#include <stdio.h>

/**
 * main - print hex numbers
 *
 * Return: (0) when successful
 */
int main(void)
{
	int hexNum, hexAlpha;

	for (hexNum = '0'; hexNum <= '9'; hexNum++)
		putchar(hexNum);
	for (hexAlpha = 'a'; hexAlpha <= 'f'; hexAlpha++)
		putchar(hexAlpha);
	putchar('\n');
	return (0);
}
