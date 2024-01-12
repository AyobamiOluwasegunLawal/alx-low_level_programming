#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers
 * @argc: count argument
 * @argv: pointer to input argument
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
