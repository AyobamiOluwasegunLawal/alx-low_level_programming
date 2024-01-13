#include <stdio.h>

/**
 * main - print all argument it recieves
 * @argc: argument count
 * @argv: pointer to argumant string
 *
 * Return: (0) when successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
