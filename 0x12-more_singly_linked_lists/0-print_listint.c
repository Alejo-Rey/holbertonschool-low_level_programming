#include "lists.h"

/**
 * print_listint - function to printall the nodes
 * @h: the elements od the node
 * Return: the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
