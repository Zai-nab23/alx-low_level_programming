#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *initial;

	while (*head != NULL)
	{
		initial = *head
			*head = (*head)->next;
		free(initial);
	}
	*head = NULL;
}
