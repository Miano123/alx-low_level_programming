#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *get_op_func - selects the correct function to perform
  *the operation asked by the user
  *@s:Operator
  *Return:result of the function or NULL
  */

int (*get_op_func(char *s))(int, int)
{
	/** declarations */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	/** matches operator to function */
		i = 0;
		while (ops[i].op)
		{
			if (ops[i].op[0] == *s && s[1] == '\0')
				return (ops[i].f);
			i++;
		}
		printf("Error\n");
		exit(99);
}
