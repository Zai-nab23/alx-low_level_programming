#include "main.h"

/**
 * _strspn - unsigned int _strspn(char *s, char *accept)
 * @s: searched string
 * @accept: consist of byte to be measured
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				bytes++;
			break;
			}

			else if (accept[j + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
