#include "main.h"

/**
  *string_toupper - function that changes all lowercase letters of a string
  *  to uppercase
  *@s:input string
  *Return:void
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		i++;
	}
	return (s);
}
