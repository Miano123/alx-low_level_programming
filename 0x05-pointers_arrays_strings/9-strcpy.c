#include "main.h"

/**
  *_strcpy - copies the string pointed
  * @dest: A pointer to char to be updated
  * @src: A pointer to char to be updated
  * Retrun: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (scr[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
