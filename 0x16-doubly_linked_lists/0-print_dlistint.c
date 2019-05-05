#include "lists.h"

/**
 * print_dlistint -
 * @h: the head of the list
 * Return: return the number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	if (!h)
		return (0);
	for (x = 0; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
