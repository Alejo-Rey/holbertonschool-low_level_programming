#include "lists.h"

/**
 * insert_dnodeint_at_index - function to inser a node in the index position
 * @h: the head node
 * @idx: the index to insert he node
 * @n: the numbert to insert
 * Return: the addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev, *next;
	unsigned int x;

	new = malloc(sizeof(dlistint_t));

	if (!h || !new)
		return (NULL);
	prev = *h;
	new->n = n;
	if (!*h || idx == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	for (x = 1; x < idx && prev->next && prev; x++)
		prev = prev->next;

	next = prev->next;
	new->prev = prev;
	if (prev != NULL)
		prev->next = new;
	new->next = next;
	if (next)
		next->prev = new;
	return (new);
}
