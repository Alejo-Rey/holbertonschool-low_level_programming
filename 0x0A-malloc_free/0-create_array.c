#include "holberton.h"

/**
 * create_array - create an array
 * @size: size of the char
 * @c: data of the char
 * Return: return x
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *x;

	x = malloc(sizeof(c) * size);

	if (size == 0 || x == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		x[count] = c;
	return (x);
}
