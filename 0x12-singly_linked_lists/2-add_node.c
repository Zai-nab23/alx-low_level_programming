#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head list
 * @str: string to put to the first pointer
 * Return: result
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int a, num = 0;
		list_t *first_node = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);

	if (first_node == NULL)
		return (NULL);

	first_node->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		num++;
			first_node->len = num;
			if (first_node->str == NULL)
			{
				free(first_node);
				return (NULL);
			}
			first_node->next = *head;
			*head = first_node;

			return (first_node);
}
