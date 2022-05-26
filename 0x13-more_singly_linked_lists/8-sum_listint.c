#include "lists.h"

/**
 * sum_listint - returns sum of all data in listint_t linked list
 * @head: pointer to head
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	if (!head)
		return (0);

	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
