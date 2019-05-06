#include "lists.h"

/**
 * get_dnodeint_at_index - get a node of specific index
 * @head: head of the list
 * @index: the node to return
 * Return: the node finded
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *find;
	unsigned int x = 0;

	find = head;
	if (!find)
		return (NULL);
	while(find)
	{
		if (x == index)
			return (find);
		find = find->next;
		x++;
	}
	return (NULL);
}
