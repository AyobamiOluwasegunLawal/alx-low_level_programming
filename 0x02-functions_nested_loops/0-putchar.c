#include "main.h"

/**
 * main - Will print character
 *
 * Return: Alway 0 (success)
 */

int main(void)
{
	char *word = "_putchar";
	int count = 0;

	while (word[count] != '\0')
	{
		_putchar(word[count]);
		count++;
	}

	_putchar('\n');

	return (0);
}
