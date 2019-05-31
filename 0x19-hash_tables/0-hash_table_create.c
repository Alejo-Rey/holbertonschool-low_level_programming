#include "hash_tables.h"

/**
 * hash_table_create -
 * @size: size of has table
 * Return: Return pointer of the hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;

	t = malloc(sizeof(hash_table_t));
	if (!t)
	{
		free(t);
		return (NULL);
	}

	t->size = size;
	t->array = calloc(size, sizeof(hash_node_t *));
	if(!t->array)
	{
		free(t->array);
		return (NULL);
	}
	return (t);
}
