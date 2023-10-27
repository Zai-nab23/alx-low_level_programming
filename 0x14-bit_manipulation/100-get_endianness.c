#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int a = 1;
	int small_or_large;

	small_or_large = (int) (((char *) &a)[0]);
	return (small_or_large);
}
