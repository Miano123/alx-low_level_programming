#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *op_add - adds two numbers
  *@a: first number
  *@b: second number
  *Return:addition
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - subctracts two numbers.
  *@a:first number
  *@b:second number
  *Return:difference
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiplies two numbers.
  *@a:first number
  *@b:second number
  *Return: multiplication
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - divides two numbers
  *@a: first number
  *@b: second number
  *Return:Division
  */

int op_div(int a, int b)
{
	return (a / b);
	if (b == 0)
		printf("Error\n"), exit(100);
}

/**
  *op_mod - modulus of two numbers
  *@a:first number
  *@b:second number
  *Return:Modulo
  */

int op_mod(int a, int b)
{
	return (a % b);
	if (b == 0)
		printf("Error\n"), exit(100);
}
