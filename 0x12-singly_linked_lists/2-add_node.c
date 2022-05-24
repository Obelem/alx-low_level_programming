#include "lists.h"

/**
 * add_node - adds a new node at beginning of a linked list
 * @head: double pointer to list_t
 * @str: new string value
 * Return: the address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
