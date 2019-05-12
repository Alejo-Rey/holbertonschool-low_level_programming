#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in the index position
 * @head: head of the node
 * @index: the position od the delete
 * Return: 1 if it succeded or -1 if it fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *p, *n;
	unsigned int x;

	if (!head)
		return (-1);
	del = *head;
	for (x = 0; x < index || !del; x++)
		del = del->next;
	if (del)
	{
		p = del->prev;
		n = del->next;
		p->next = n;
		n->prev = p;
		free(del);
		return (1);
	}
	else
		return (-1);
}
