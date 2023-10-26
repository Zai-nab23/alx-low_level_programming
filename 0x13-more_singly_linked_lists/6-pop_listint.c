#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t
 * @head: pointer
 *
 * Return: the data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *initial;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	initial = (*head)->next;
	free(*head);
	*head = initial;

	return (num);
}
