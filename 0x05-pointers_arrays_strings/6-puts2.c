#include "main.h"
#include <stdio.h>

/**
  *put2 - prints every charater of a string
  *@str: A pointer to the int that will be updated
  *Return: void
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
		}
		i += 1;
	}
	putchar('\n');
}
