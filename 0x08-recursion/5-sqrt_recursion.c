#include "main.h"

/**
 * _sqrt_root - function that returns the
 * natural square root of a number
 * @n: input number
 * @a: value
 * Return: square root
 */
int _sqrt_root(int n, int a);

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: input value
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_root(n, 1));
}
/**
 * _sqrt_root - function that returns the
 * natural square root of a number
 * @n: input number
 * @a: value
 * Return: square root
 */
int _sqrt_root(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	return (_sqrt_root(n, a + 1));
}
