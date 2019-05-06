#include "lists.h"

/**
 * sum_dlistint - function to sum all the content
 * @head: the head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
