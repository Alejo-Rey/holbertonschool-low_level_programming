#include "lists.h"

/**
 * pop_listint -
 *
 * Return: 
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	x = (*head)->n;
	*head = tmp->next;
	free(tmp);

	return (x);

}
