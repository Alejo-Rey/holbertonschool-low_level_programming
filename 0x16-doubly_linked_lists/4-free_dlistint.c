#include "lists.h"

/**
 * free_dlistint - function to free a linked list
 * @head: the head of the list
 * Return: non
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
