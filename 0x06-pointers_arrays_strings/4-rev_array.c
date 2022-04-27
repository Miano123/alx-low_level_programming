#include "main.h"

/**
  *reverse_array - function that reverses the content of arrays
  *@a:an array of integer
  *@n:number of elements
  *Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, y, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (y = i + 1; y > 0; y--)
		{
			temp = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = temp;
		}
	}
}
