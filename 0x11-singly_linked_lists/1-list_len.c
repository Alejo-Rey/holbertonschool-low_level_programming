#include "lists.h"

/**
 * print_list - function to print teh linked list
 * @h: para,eterto print
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
