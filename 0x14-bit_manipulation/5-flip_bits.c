#include "main.h"

/**
  * flip_bits - flip of bits
  * @n: first number
  * @m: second number
  * Return: flip bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int i;

	for (i = 0; XOR; XOR >>= 1)
	{
		if (XOR & 1)
		{
			i++;
		}
	}

	return (i);
}
