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
	int a, z;
	int *s;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	s = malloc(sizeof(int) * z);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < z; a++)
	{
		s[a] = min;
		min++;
	}
	return (s);
}
