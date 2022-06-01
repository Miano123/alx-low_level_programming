#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - converts a binary number to an
  * unsigned int.
  * @b: binary.
  * Return: n
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		n <<= 1;
		n += b[i] - '0';
	i++;
	}

	return (n);
}
