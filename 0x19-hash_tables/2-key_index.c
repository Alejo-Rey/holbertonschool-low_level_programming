#include "hash_tables.h"

/**
 * key_index - funtion to give the index of the a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_table, index_key;

	hash_table = hash_djb2(key);
	index_key = hash_table % size;
	return (index_key);
}
