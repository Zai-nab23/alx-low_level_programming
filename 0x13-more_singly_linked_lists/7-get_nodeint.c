#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: first node
 * @index: index
 *
 * Return: if node doesn't exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *initial = head;

	while (initial && i < index)
	{
		initial = initial->next;
		i++;
	}
	return (initial ? initial : NULL);
}
