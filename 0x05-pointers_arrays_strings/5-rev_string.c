#include "main.h"
#include <string.h>

/**
  * rev_string - function call from main
  * @s: Parameter 1
  *
  * Return: void
  */
void rev_string(char *s)
{
	char word[500];

	int i;

	int len;

	len = strlen(s) - 1;

	strcpy(word, s);

	for (i = len; i >= 0; i--)
	{
		word[len - i] = s[i];
	}
	strcpy(s, word);
}
