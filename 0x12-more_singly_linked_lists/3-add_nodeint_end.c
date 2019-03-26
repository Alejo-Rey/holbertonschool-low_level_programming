#include "lists.h"

/**
 * add_nodeint_end - function to add a node at the end of the list
 * @head: the pointer of the header node
 * @n: the info of the new node
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->next = NULL;
	return (new);
}
