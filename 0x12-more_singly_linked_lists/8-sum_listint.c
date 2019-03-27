#include "lists.h"

/**
 * sum_listint - function to sum the data of the list
 * @head: the headerof the list
 * Return: x, the sum
 */
int sum_listint(listint_t *head)
{
	unsigned int x = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		x += head->n;
		head = head->next;
	}

	return (x);
}
