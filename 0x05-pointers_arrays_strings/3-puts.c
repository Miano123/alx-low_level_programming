#include <stdio.h>

/**
  *_puts - writes the charactter c to stdout
  *@str:character to print
  *Return 0
  */

void _puts(char *str)
{
	char *c;
	int x;

	c = str;

	for (x = 0; c[x]; x++)
	{
		putchar(c[x]);
	}
	putchar('\n');
}
