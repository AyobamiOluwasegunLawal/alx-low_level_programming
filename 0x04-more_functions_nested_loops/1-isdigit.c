#include "main.h"

/**
  * _isdigit - this checks for digit from 0 through 9
  *
  * @c: this is a parameter
  *
  * Return: 1 if within the condition if not otherwise
  */

int _isdigit(int c)
{
		if (c >= 48 && c <= 57)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
