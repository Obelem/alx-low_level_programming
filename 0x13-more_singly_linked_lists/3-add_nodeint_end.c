#include "lists.h"

/**
 * add_nodeint_end - adds node to end of linked list
 * @head: double pointer to end
 * @n: integer data
 * Return: address of a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
