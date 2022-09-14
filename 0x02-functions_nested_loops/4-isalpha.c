#include "main.h"

/**
  * _isalpha - if c is a letter, uppercase, lowercase print 1
  *
  * @c: this is a parameter
  *
  * Return: 1 or 0 when as each conditons runs
  */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
