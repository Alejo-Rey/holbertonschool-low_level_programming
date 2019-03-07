#include "holberton.h"

/**
 * malloc_checked - allocated a memory
 * @b: size of pointer
 * Return: alaways something
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *x;
	
	x = malloc(b);
	if (x == NULL)
		return ((void *)98);

	return ((void *)x);
}
