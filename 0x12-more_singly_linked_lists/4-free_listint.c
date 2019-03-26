#include "lists.h"

/**
 * free_listint - function to free a list
 * @head: the header of the list to free
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
