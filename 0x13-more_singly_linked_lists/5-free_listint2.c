#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
