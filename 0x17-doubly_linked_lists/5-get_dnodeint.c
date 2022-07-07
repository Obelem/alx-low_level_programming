#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of doubly linked list
 * @head: pointer to head node
 * @index: node index to be returned
 * Return: node on success, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *node = head;

	for (count = 0; node && count < index; count++)
		node = node->next;

	if (count != index)
		return (NULL);
	return (node);
}
