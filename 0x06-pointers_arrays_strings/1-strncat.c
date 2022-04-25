#include "main.h"
#include <string.h>

/**
  *_strncpy - Function that concatenates two strings
  *@dest:destination
  *@src:source string
  *@n:amount of bytes used
  *Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
