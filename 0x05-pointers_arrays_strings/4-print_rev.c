#include "main.h"
#include  <stdio.h>

/**
  *print_rev - prints a string rev
  *@s: point to be updated
  *Return:void
  */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - i; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
