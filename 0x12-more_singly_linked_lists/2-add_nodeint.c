#include "lists.h"

/**
 * add_nodeint - function to add a node in the beggining of the list
 * @head: the pointer of the header node
 * @n: the info of the new node
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
