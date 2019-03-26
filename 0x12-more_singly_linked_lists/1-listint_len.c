#include "lists.h"

/**
 * listint_len - funtion to return the number of the node
 * @h: the node
 * Return: lenght of the node, x
 */
size_t listint_len(const listint_t *h)
{
	int x = 0;
	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
