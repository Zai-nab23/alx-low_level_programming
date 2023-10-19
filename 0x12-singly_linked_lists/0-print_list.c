#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);
	for (a = 1; h->next != NULL; a++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (a);
}
