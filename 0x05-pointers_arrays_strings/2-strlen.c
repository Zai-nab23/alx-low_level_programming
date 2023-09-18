#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: parameter to be counted
 * Return: length of string
 */
int _strlen(char *s)
{
	int lengtha = 0;

	while (*s != '\0')
	{
		lengtha++;
		s++;
	}

	return (lengtha);
}
