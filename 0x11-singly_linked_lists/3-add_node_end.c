#include "lists.h"

/**
 * add_node_end - function to add a node to the end of the list
 * @head: the pointer of the head
 * @str: the data of the new node
 * Return: return the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int x = 0;

	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (head == NULL || new == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	new->str = strdup(str);
	new->len = x;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;

	}
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->next = NULL;
	return (new);
}
