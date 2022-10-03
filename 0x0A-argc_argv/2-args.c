#include <stdio.h>

/**
  * main - this is a function to print name
  * @argc: argc parameter 1
  * @argv: an arrau of a command listed, parameter 2
  *
  * Return: 0 when successful
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
