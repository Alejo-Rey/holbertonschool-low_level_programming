#include "lists.h"

/**
 * dlistint_len - funtion to return the number of the nodes
 * @h: the header of the list
 * Return: the number of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	if (!h)
		return (0);
	for ( ; h; x++)
	{
		h = h->next;
	}
	return (x);
}
