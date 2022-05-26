#include "lists.h"

/**
 * add_nodeint - adds a node to the begiinning of a linked list
 * @head: double pointer to head node
 * @n: data integer
 * Return: address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* initialize new */
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
