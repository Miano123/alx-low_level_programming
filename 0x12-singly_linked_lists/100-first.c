#include <stdio.h>
void myStartupFun(void) __attribute__ ((constructor));

/**
  * myStartupFun - function to be executed before main
  * @void: input
  * Return: no return
  */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
