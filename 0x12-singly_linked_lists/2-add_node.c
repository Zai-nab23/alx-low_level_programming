#include "lists.h"

int len(const char *str)
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head list
 * @str: string to put to the first pointer
 * Return: pointer to the first
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;

	if (head == NULL)
		return (NULL);
	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);
	if (*head == NULL)
		first_node->next = NULL;
	else
	{
		first_node->next = *head;
		first_node->str = strdup(str);
		first_node->len = len(str);
		*head = first_node;
	}
	return (*head);
}

	/**
	 * len - look for str
	 * @str: the string to look for
	 * Return: length of string
	 */
int len(const char *str)
{
	int a;

	if (str == NULL)
		return (0);
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
