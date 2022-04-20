#include "main.h"

/**
  *_strlen - funtcion that returns the length of a string
  *@s:a pointer to an int that will be updated
  *Return: Always 0
  */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
