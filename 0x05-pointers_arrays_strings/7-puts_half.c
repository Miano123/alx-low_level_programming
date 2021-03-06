#include "main.h"
#include <stdio.h>

/**
  * puts_half - prints every other character of the string
  * @str: A pointer to an int that will be updated
  * Return: Always 0
 */

void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;
	for (i = last; str[i]; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
