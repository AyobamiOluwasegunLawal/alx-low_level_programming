#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: count number of argument(s)
 * #argv: pointer to the string argument
 *
 * Return: (0) when successful
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
