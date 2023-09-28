#include "main.h"

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * @n: input integer
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n == 1 || n < 0) 
	return (0);
	else
	return (1);
}
