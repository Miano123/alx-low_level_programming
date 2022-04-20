#include "main.h"
#include <stdio.h>

/**
  *put2 - prints every charater of a string
  *@str: A pointer to the int that will be updated
  *Return: void
  */

void put2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
