#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimium values
 * @max: maximium values
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int a, b;
	int *s;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	s = malloc(sizeof(int) * 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		s[a] = min;
		min++;
	}
	return (s);
}
