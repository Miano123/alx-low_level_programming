#include <stdio.h>

/**
 * main - pprints the alphabet in lowercase followed bya new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
