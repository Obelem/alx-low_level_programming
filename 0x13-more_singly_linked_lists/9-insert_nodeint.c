#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: double pointer to head node
 * @idx: index to be inserted
 * @n: integer value of new node
 * Return: address of new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *new;

	/* traverse to node before idx */
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
	}

	/* initialize new node */
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	/*assign value to new */
	new->n = n;

	new->next = temp->next;
	temp->next = new;

	return (new);
}
