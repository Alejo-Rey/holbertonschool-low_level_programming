#include "lists.h"

/**
 * get_nodeint_at_index - function to find a node in a list
 * @head: the head of the list
 * @index: the number of the node to search
 * Return: the searched node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (x < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
		return (head);
}
