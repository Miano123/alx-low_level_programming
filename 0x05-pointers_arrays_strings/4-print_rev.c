#include  <stdio.h>

/**
  *print_rev - prints a string rev
  *@s: point to be updated
  *Return: nothing
  */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	while (i >= 0)
	{
		putchar(*(s + 1));
		i--;
	}
	putchar('\n');
}

