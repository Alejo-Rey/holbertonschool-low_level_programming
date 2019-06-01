#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table
 * @ht: the has table
 * Return: Not return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x, y = 0;
	hash_node_t *temp;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			temp = ht->array[x];
			if (y == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			free(temp);
			y = 1;
		}
	}
	printf("}\n");
}
