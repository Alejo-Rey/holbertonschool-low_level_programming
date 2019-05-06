#include "lists.h"

/**
 * add_dnodeint_end - function to add a node to the end of the list
 * @head: the header of the list
 * @n: data of the node
 * Return: return the address of the new element, or NULL on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *jump;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		jump = *head;
		while (jump->next != NULL)
			jump = jump->next;
		new->prev = jump;
		jump->next = new;
	}
	return (new);
}
