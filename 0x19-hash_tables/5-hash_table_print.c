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
			if (temp->next)
			{
				printf(", ");
				temp = temp->next;
				print_listint(temp);
			}
			y = 1;
		}
	}
	printf("}\n");
}

/**
 * print_listint - function to printall the nodes
 * @h: the elements od the node
 * Return: the number of the nodes
 */
size_t print_listint(const hash_node_t *h)
{
	int x = 0;

	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		h = h->next;
		x++;
	}
	return (x);
}
