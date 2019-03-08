#include "holberton.h"

/**
 * _calloc - funtion to use calloc
 * @nmemb: size int;
 * @size: size of type
 * Return: always something, maybe
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb + size);
	if (x == NULL)
		return (NULL);

	for (a = 0; a <= nmemb; a++)
		x[a] = '\0';

	return (x);
}
