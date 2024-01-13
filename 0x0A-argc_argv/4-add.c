#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - add positive numbers
 * @argc: count input argument
 * @argv: pointer to argument string
 *
 * Return: (0) when successful
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
