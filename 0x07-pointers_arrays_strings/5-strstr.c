#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: searched string
 * @needle: the she substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	j = 0;
	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);

				j++;

			} while (haystack[j] == needle[j]);
		}

		haystack++;
	}

	return ('\0');
}
