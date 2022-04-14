#include "main.h"

/**
  * _isupper - function that checks for uppercase character
  *@c inputs value to check
  * Return: 0 Always
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

