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

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	else
		printf("%s\n", argv[0]);
	return (0);
}
