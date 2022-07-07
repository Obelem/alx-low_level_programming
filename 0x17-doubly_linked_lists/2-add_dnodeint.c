#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of list
 * @head: double ptr to head node
 * @n: value of new node
 * Return: address of new element on success or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
