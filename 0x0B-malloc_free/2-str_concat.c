#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1:string one
 * @s2:sring tw0
 *
 * Return: pointer to allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int string1, string2, a, b;
	char *pointer;

		if (s1 == NULL)
		{
			s1 = "";
		}

	if (s2 == NULL)
	{
		s2 = "";
	}

	string1 = 0;
	while (s1[string1] != '\0')
	{
		string1++;
	}
	string2 = 0;
	while (s2[string2] != '\0')
	{
		string2++;
	}
	pointer = malloc(sizeof(char) * (string1 + string2 + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < string1; a++)
	{
		pointer[a] = s1[a];
	}
	for (b = 0; b <= string2; b++)
	{
		pointer[b] = s2[b];
	}
	return (pointer);
}
