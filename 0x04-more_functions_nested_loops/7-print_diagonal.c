#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int co;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (co =  1; co <= n; co++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
