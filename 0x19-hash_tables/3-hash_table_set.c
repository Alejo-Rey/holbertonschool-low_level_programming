#include "hash_tables.h"

/**
 * hash_table_set - function to add elements into the hash table
 * @ht: the has table
 * @key: the key of the hash
 * @value: the value associated with the key
 * Return: 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp_1, *temp_2;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp_1 = ht->array[index];
	while (temp_1)
	{
		if (strcmp(temp_1->key, key) == 0)
		{
			free(temp_1->value);
			temp_1->value = strdup(value);
			return (1);
		}
		temp_1 = temp_1->next;
	}
	if (!(ht->array[index]))
	{
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		temp_2 = ht->array[index];
		ht->array[index] = add_node(&temp_2, value, key);
	}
	return (1);
}

/**
 * add_node- function to add a new node in the beginning
 * @head: the pointer of the head
 * @str: the data of the new node
 * @key: the key of the hash table
 * Return: the address of the head
 */

hash_node_t *add_node(hash_node_t **head, const char *str, const char *key)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(str);
	new->next = *head;
	*head = new;

	return (*head);
}
