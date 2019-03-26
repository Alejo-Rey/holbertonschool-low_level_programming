#include "lists.h"

/**
 *  - function to see the size of linked list
 * @h: the string to size
 * Return: the size of the list
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
