#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - the sum of a and b. Prototype
 * @: first input
 * @b: second input
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtration
 * @a: first input
 * @b: second input
 * Return: result of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mulitiplication
 * @a: first input
 * @b: second input
 * Return: product od a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first input
 * @b: second input
 * Return: result of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: first input
 * @b: second input
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
