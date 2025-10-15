#include "main.h"

/**
 * main - Generate the first 50 fibonacci's number.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	long int startOne = 1, startTwo = 2, count = 5, div, tempSum, num, digit;
	long int sum = 0, tempOne = startOne, tempTwo = startTwo;

	_putchar(startOne + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(startTwo + '0');
	_putchar(',');
	_putchar(' ');

	while (count <= 52)
	{
		sum = tempOne + tempTwo;
		div = 1;
		tempSum = sum;
		while (tempSum > 9)
		{
			tempSum /= 10;
			div *= 10;
		}
		num = sum;
		while (div > 0)
		{
			digit = num / div;
			_putchar(digit + '0');
			num %= div;
			div /= 10;
		}
		if (count != 50)
		{
			_putchar(',');
			_putchar(' ');
		}
		tempOne = tempTwo;
		tempTwo = sum;
		count++;
	}
	_putchar('\n');
	return (0);
}
