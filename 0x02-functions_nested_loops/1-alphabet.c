#include "main.h"

/**
<<<<<<< HEAD

    *print_alphabet - prints alphabet in lowercase

      *

      */
=======
 * print_alphabet - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
 */
>>>>>>> 880d046d08a5767f08d3f08208425cf0390021eb

void print_alphabet(void)

{
<<<<<<< HEAD

		char c;



			for (c = 'a'; c <= 'z'; c++)

						_putchar (c);

				_putchar('\n');

=======
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l += 1;
	}
	_putchar(10);
>>>>>>> 880d046d08a5767f08d3f08208425cf0390021eb
}
