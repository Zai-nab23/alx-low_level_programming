#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: bits
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int high;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	high = 1;
	high = high << index;
	*n = ((*n) | high);
	return (1);
}
