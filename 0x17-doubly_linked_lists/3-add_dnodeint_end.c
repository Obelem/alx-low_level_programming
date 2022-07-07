#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of doubly linked list
 * @head: double ptr to head
 * @n: value of new node
 * Return: new node ptr on success or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
