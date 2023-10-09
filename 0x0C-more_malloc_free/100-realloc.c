#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size allocated by malloc
 * @new_size: new size allocated
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int a, max = new_size;
	char *olds = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
			return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
		if (s == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		s[a] = olds[a];
			free(ptr);
	return (s);
}
