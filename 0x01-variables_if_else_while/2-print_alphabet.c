#include <stdio.h>

/**
 * main - pprints the alphabet in lowercase followed bya new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
