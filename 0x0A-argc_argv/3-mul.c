#include <stdio.h>
#include <stdlib.h>
 
/**
  * main - Entry point
  * @argc: parameter 1
  * @argv: parameter 2
  *
  * Return: 0 when successful
  */

int main(int argc, char *argv[])
{
	int result = 0, num1, num2;
	
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}

