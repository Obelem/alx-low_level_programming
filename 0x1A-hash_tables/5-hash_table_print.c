#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL && !node)
			continue;
		if (!node)
			node = ht->array[i];
		printf("'%s': '%s'", node->key, node->value);

		node = node->next;
		while (!node && i < ht->size)
			node = ht->array[++i];
		if (node)
			printf(", ");
	}
	printf("}\n");
}
