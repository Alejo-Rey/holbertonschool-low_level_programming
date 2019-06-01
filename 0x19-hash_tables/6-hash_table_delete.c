#include "hash_tables.h"

/**
 * hash_table_delete - function to delete a hash table
 * @ht: the hash table
 * Return: Noni
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp, *aux;

	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp)
		{
			free(temp->key);
			free(temp->value);
			aux = temp;
			temp = temp->next;
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
