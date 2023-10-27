#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output;
	unsigned long int num;

	output = n ^ m;
	for (num = 0; output > 0;)
	{
		if ((output & 1) == 1)
			num++;
		output = output >> 1;
	}
	return (num);
}
