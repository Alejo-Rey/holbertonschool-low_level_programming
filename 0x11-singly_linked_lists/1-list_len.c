#include "lists.h"

/**
 * list_len - function to see the size of linked list
 * @h: the string to size
 * Return: the size of the list
 */

size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h; x++)
	{
		h = h->next;
	}
	return (x);
}
