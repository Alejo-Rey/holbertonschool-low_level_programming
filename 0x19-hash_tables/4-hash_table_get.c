#include "hash_tables.h"

/**
 * hash_table_get - funciton to retrives a value form the key
 * @ht: hash table
 * @key: the key of the node
 * Return: return the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!key || !ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
