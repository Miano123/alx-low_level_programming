#include "main.h"
#include <string.h>

/**
  *_strcat - this function concatenates the  dest and src
  *@dest:this will be the holder of the result
  *@src: second string to be concatenated on to the first string dest
  *Return:dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
