#include "lists.h"

/**
 * free_list - function to free the list
 * @head: the header of the list
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
