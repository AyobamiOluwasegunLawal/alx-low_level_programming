#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	char smallAlphabet = 'a';
	char capitalAlphabet = 'A';

	while (smallAlphabet <= 'z')
	{
		putchar(smallAlphabet);
		smallAlphabet++;
	}

	while (capitalAlphabet <= 'Z')
	{
		putchar(capitalAlphabet);
		capitalAlphabet++;
	}

	putchar('\n');

	return (0);
}

