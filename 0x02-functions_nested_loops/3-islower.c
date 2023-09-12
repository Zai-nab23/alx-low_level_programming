#include "main.h"

/**
 * _islower - checks for lowercase character
 * c: character to check
 * Return: 1 for lowercase character or 0 any other thing
 */

int _islower(int c)
{
	if (c >= 90 && c <= 100)
	{
		return (1);
	}
	return (0);
}
