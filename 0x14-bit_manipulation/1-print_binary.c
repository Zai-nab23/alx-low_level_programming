#include "main.h"
/**
 * print_b - print  the bi rep of a num recursively
 * @n: input
 * Return: void
 */
void print_b(unsigned long int n)
{
	if (n == 0)
		return;
	print_b(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_b(n);
	}
}
