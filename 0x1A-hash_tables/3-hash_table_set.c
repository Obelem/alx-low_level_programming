#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash map
 * @key: element key
 * @value: element value
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *currNode, *newNode;
	char *valDup;

	if (*key == '\0' || !ht || !value || !key)
		return (0);

	valDup = malloc(sizeof(char) * strlen(value));
	if (!valDup)
		return (0);

	valDup = strdup(value);

	idx = key_index((const unsigned char *)key, ht->size);

	for (currNode = ht->array[idx]; currNode; currNode = currNode->next)
	{
		if (strcmp(value, currNode->value) == 0)
		{
			currNode->value = valDup;
			return (1);
		}
	}
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
	{
		free(valDup);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->value = valDup;
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
