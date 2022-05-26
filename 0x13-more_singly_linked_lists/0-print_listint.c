#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int count = 0;

	while (h)
	{
		printf("%lu\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
