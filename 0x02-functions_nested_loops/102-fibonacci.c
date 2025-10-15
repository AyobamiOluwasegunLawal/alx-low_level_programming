#include "main.h"

/**
 * main - Generate the first 50 fibonacci's number.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	long int startOne = 1;
	long int startTwo = 2;
	long int count = 5;
	long int div;
	long int tempSum;
	long int num;
	long int digit;

	long int sum = 0; 
	long int tempOne = startOne;
	long int tempTwo = startTwo;

	_putchar(startOne + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(startTwo + '0');
	_putchar(',');
	_putchar(' ');

	while (count <= 50)
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
