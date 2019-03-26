#include "lists.h"

/**
 * add_node- function to add a new node in the beginning
 * @head: the pointer of the head
 * @str: the data of the new node
 * Return: the address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int x = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL || head == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	new->str = strdup(str);
	new->len = x;
	new->next = *head;

	*head = new;

	return (*head);
}
