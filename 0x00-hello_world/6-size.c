#include <stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of char:%d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int:%d byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int:%d byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int:%d byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float:%d byte(s)\n", (unsigned long)sizeof(f));
	return 0;
}
