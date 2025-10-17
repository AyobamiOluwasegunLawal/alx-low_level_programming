#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to conver.
 *
 * Return: (0) if no number founded within the string other the number found.
 */

int _atoi(char *s)
{
	int i, count = 0;
	signed int temp = 0;
	int sign = 1;
	short int digitFound = 0;

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
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
