#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table on success or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* define new hash table */
	hash_table_t *hashTable = malloc(sizeof(hash_table_t));

	if (!hashTable)
		return (NULL);

	hashTable->size = size;
	/* define array of key value pairs (hash nodes) */
	hashTable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashTable->array == NULL)
		return (NULL);

	return (hashTable);
}
