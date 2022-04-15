#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *@n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
