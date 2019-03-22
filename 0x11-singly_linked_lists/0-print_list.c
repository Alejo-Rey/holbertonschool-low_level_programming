#include "lists.h"

/**
 * print_list - function to print teh linked list
 * @h: para,eterto print
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	int x;

	for (x = 0; h; x++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] %p\n", h->str);
		h = h->next;
	}
	return (x);
}
