#include "main.h"
#include <string.h>

/**
  *_strncpy - function that concanates two strings
  *@dest: where the resultant will be stored
  *@src:source string
  *@n:amount of bytes used from src
  *Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
