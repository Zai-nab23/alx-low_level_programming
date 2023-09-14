#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: value
 * Return: 1 if is a number and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
