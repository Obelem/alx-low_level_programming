#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head node
 * @idx: index to be inserted
 * @n: value of new node
 * Return: address of new node on success else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node;
	dlistint_t *current = *h;

	for (count = 0; current && count < idx; count++)
		current = current->next;

	if (count != idx || !new_node)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;
	if (current->prev != NULL)
		(current->prev)->next = new_node;
	else
		*h = new_node; /* update value of head if index is 0 */
	current->prev = new_node;

	return (new_node);
}
