#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @a: the parameter to be checked
 * Return: value of the last digit of number
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + '0');
	return (b);
}
