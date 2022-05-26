#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @index: index of node to be returned
 * @head: pointer to head
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	if (!head)
		return (NULL);

	while (i < index)
	{
		node = node->next;
		if (!node)
			return (NULL);
		i++;
	}
	return (node);
}
