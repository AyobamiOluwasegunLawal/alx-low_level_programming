#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to conver.
 *
 * Return: Converted integer, or 0 if no numbers are found.
 */

int _atoi(char *s)
{
	int i, count = 0;
	unsigned int temp = 0;
	int sign = 1;
	short int digitFound = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && !digitFound)
			sign = -sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digitFound = 1;
			temp = (temp * 10) + (s[i] - '0');
		}
		else if (digitFound)
			break;
	}
	return (sign * temp);
}
