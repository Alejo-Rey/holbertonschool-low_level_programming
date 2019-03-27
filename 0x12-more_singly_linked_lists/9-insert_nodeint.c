#include "lists.h"


/**
 * insert_nodeint_at_index - 
 * @head: the header of the list
 * @idx:
 * @n:
 * Return: 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *temp;

	while (x < idx)
	{
		head = head->next;
		x++;
	}
	temp-

}
