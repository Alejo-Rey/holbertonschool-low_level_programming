#include "holberton.h"

/**
 * set_bit -
 *
 * Return: 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 64)
		return (-1);

	x = x << index;
	*n = *n | x;
	return (1);
}
