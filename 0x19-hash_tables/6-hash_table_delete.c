#include "hash_tables.h"

/**
 * hash_table_delete - function to delete a hash table
 * @ht: the hash table
 * Return: Noni
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			temp = ht->array[x];
			if (temp->next)
				free_list(temp);
			free(temp);
			free(ht->array);
		}
	}
	free(ht);
}
/**
 * free_list - function to free a list
 * @head: the header of the list to free
 *
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
