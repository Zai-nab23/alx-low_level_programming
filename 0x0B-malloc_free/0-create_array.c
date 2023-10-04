#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 *  and initializes it with a specific char
 *  @size: input
 *  @c: string of character
 *  Return: a pointer to the base character c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *pointer;

	if (size == 0)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(char) * size);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		pointer[a] = c;
	}
	return (pointer);
}
