#include  "main.h"
#include <string.h>

/**
  *print_rev - prints a string
  *@s: point to be updated
  *Return: Always 0
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}

