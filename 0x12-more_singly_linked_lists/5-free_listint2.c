#include "lists.h"

/**
 * free_listint2 -
 *
 * Return: 
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if (head)
		exit(0);

	while (head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}

}
