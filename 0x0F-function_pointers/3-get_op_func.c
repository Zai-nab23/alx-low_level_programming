#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct
 * function to perform the operation
 * @s: operator passed as argument to the program
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	/* initialize a */
	a = 0;

	/* s does not match any of the operands */
	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;

	return (ops[a].f); /* return operation */
}
