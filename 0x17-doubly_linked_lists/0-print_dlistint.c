#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 * @h: pointer to head node
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
