#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: first input
 *
 */
void free_list(list_t *head)
{
	list_t *last_node;

	while (head != NULL)
	{
		last_node = head;

		head = head->next;

		free(last_node->str);

		free(last_node);
	}
}
