#include "lists.h"

/**
 * pop_listint - function that free the first node
 * @head: the head of the list
 * Return: the head eraser
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
