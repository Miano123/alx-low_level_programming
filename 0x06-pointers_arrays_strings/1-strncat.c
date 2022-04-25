#include "main.h"
#include <string.h>

/**
  *_strncat - This is the main function for concatenates two strings
  *@dest: destination
  *@src: source string
  *@n: This is number of bytes.
  *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
