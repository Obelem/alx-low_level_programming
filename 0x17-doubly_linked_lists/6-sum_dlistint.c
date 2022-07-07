#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of doubly linked list
 * @head: head node
 * Return: 0 if empty else sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);

	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
