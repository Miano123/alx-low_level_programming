#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  *@s: first string
  *@accept: second string
  *Return: a pointer to the byte in s that matches one of the
  *bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, r;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (r = 0; *(accept + r) != '\0'; r++)
		{
			if (*(s + i) == *(accept + r))
				return (s + i);
		}
	}
	return ('\0');
}
