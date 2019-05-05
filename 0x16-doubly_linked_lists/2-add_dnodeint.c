#include "lists.h"

/**
 * add_dnodeint - funtion to add a node in the beginnig of the list
 * @head: the head of the list
 * @n: the date of the node
 * Return: return the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t;

	t = malloc(sizeof(dlistint_t));
	if (!t)
	{
		free(t);
		return (NULL);
	}
	t->n = n;
	t->next = *head;
	t->prev = NULL;
	*head = t;
	return (t);
}
