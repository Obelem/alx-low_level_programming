#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->tmp;
		free(head);
		head = tmp;
	}
}
