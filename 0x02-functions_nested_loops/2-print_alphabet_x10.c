<<<<<<< HEAD
#include  "main.h"

/**

   * print_alphabet_x10 - function that prints 10 times the alphabet,

    * in lowercase

     * Return: nothing.

      */

void print_alphabet_x10(void)
{
	int 1;
	int n = 0;
	while (n < 10)
	{
		1 = 'a';

		while (1 <= 'z')
		{
			_putchar(1);

			1 += 1;
=======
#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
	int l;
	int n = 0;

	while (n < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l += 1;
>>>>>>> 880d046d08a5767f08d3f08208425cf0390021eb
		}
		_putchar(10);
		n += 1;
	}
}
