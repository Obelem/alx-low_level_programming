#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to find
 * Return: value of associated element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
