#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string input
 * Return: pointer to allocated memory an array
 */
char *_strdup(char *str)
{
	unsigned int a, b;
	char *strdup;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	strdup = (char *)malloc(sizeof(char) * (a + 1));

	if (strdup == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		strdup[b] = str[b];
	}
	return (strdup);
}
