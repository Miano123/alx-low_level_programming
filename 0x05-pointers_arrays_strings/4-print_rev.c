#include  <stdio.h>

/**
  *print_rev - prints a string rev
  *@s: point to be updated
  *Return:void
  */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (i >= 0)
	{
		putchar(*(s + 1));
		i--;
	}
	putchar('\n');
}

