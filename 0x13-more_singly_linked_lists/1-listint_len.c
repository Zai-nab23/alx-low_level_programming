#include "lists.h"
/*
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: head
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	if (h == NULL)
		return (0);
	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
