#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @s: string pointer
 * Return: string
 */
char *rot13(char *s)
{
	int a, b;
	char string1[] = "ABCDEFGHIJKLMNOPQRSTUVWSYZabcdefghijklmnopqrstuvwxyz";
	char stringrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == string1[b])
			{
				s[a] = stringrot[b];
				break;
			}
		}
	}
	return (s);
}
