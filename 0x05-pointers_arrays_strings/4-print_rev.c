#include "main.h"

/**
  *print_rev - prints a string rev
  *@s: point to be updated
  *Return:0
  */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	for (a = a - a; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
