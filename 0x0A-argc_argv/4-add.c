#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - adds positive numbers
  *@argc: number of command line arguments
  *@argv: array that contains the program command line arguments
  *Return: 0 if successful
  */

int main(int argc, char *argv[])
{
	int i, x, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
