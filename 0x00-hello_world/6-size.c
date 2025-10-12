#include <stdio.h>

/**
 * main - Entry point
 * Description: Print size of types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;

	printf("Size of a char: %zu\n", sizeof(c));
	printf("Size of an int: %zu\n", sizeof(i));
	printf("Size of long int: %zu\n", sizeof(li));
	printf("Size of long long int: %zu\n", sizeof(lli));

	return (0);
}
