#include "holberton.h"

/**
 * _strdup - allocate a pointer in other
 * @str:the pointer to allocate
 * Return: return the new pointer
 */
char *_strdup(char *str)
{
	int count, count2;
	char *x;

	if (str == NULL)
		return (NULL);	
	for (count = 0; str[count]; count++)
	{}
	x = malloc(sizeof(char) * count);
	if (x == NULL)
		return (NULL);
	for (count2 = 0; str[count2]; count2++)
		x[count2] = str[count2];
	return (x);
}
