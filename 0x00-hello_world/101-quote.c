#include <stdio.h>
#include <unistd.h>

/**
 * main - print a string wihout using printf, puts and putc to the standard err
 *
 * Return: (1) when successful
 *
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
