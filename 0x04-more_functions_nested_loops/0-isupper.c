#include "main.h"

/**
  * _isupper - this differntiates lowercase from uppercase
  *
  * @c: character to print
  *
  * Return: gives 1 when upper and 0 otherwise
  */


int _isupper(int c)
{
	if ((c == 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
