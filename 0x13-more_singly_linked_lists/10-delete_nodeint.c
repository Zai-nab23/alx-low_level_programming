#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list
 * @head: pointer
 * @index: freed node
 * Return: 1 if succeeded  and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *initial;
	listint_t *node;

	initial = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	for (a = 0; a < index - 1 && initial != NULL && index != 0; a++)
		initial = head->next;
	if (initial == NULL)
		return (-1);
	if (index == 0)
	{
		node = initial->next;
		free(initial);
		*head = node;
	}
	else
	{
		if (initial->next == NULL)
			node = initial->next;
		else
			node = initial->next->next;
		free(initial->next);
		initial->next = node;
	}
	return (1);
}
