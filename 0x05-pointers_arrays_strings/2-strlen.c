#include "main.h"

/**
  *int_strlen - funtcion that returns the length of a string
  *@s: Char
  *Return: Always 0
  */

int_strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
