#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: double pointer to head node
 * Return: head's node data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int n;
	/* store the address of current head to be freed later */
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	/* Save value of current head node before deletion */
	n = (*head)->n;

	/* delete head node*/
	*head = temp->next;

	/* free previous head node */
	free(temp);
	return (n);
}
