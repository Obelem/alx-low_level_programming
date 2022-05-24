#include "lists.h"

/**
 * free_list - function that fress a list_t list
 * @head: pointer to head node
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
