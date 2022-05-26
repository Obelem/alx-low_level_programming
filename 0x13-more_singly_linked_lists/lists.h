#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list - node sturct
 * @n: node data
 * @next: pointer to next address
 */
typedef struct list
{
	unsigned long int n;
	struct list *next;
} listint_t;

size_t print_listint(const listint_t *h);


#endif
