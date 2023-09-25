#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: searched string
 * @c: character
 * Return: if c pointer to the first occurrence of the character is found
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return ('\0');
}
