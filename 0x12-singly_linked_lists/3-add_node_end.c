#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: ptr to new node
 * @str: string
 * Return: output
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node;
	list_t *last_node;
	unsigned int a, num = 0;

	if (str == NULL)
		return (NULL);

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);
	first_node->str = strdup(str);
	if (first_node->str == NULL)
	{
		free(first_node);
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
		num++;
	first_node->len = num;
	first_node->next = NULL;

	if (*head == NULL)
	{
		*head = first_node;
	}
	else
	{
		last_node = *head;
			while (last_node->next != NULL)
			{
				last_node = last_node;
			}
		last_node->next = first_node;
	}
	return (first_node);
}
