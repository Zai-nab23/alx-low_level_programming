#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *initial;
	listint_t *new_initial;

	if (head == NULL || *head == NULL)
		return (NULL);
	initial = *head;
	*head = initial->next;
	initial->next = NULL;

	while (*head != NULL)
	{
		new_initial = (*head)->next;
		(*head)->next = initial;
		initial = *head;
		if (new_initial == NULL)
			return (*head);
		*head = new_initial;
	}
	if (*head == NULL)
	{
		*head = initial;
		return (*head);
	}
	return (NULL);
}

