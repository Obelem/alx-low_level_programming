#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
