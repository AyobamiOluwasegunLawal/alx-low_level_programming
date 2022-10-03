#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: parameter 1
  * @argv: parameter 2
  *
  * Retuen: 0 when successful
  */

int main (int argc, char *argv[])
{
	int result, num, i, j, k;

	if (argc == 1)
		printf("0\n");
	
	result = 0;
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}

	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}

	printf("%d\n", result);
	return (0);
}

