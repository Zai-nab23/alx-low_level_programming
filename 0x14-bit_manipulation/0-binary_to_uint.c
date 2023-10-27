#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return:  the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int length;

	if (!b)
		return (0);
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		length >>= 1;
		if (b[c] == '1')
			length += 1;
	}
	return (length);
}
