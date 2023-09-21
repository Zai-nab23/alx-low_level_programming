#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: input function
 * Return: s
 */
char *leet(char *s)
{
	int x, y;

	char *str1 = "aeotlAEOTL";
	char *str2 = "4307143071";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == str1[y])
			{
				s[x] = str2[y];
			}
		}
	}
	return (s);
}
