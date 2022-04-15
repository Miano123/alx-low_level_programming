#include "main.h"
#include <stdio.h>

/**
 * print_square - a function that prints a squre, followed by a new line
 * @size: size of both  width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			putchar('#');
			for (b = 2; b <= size; b++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
