#include "holberton.h"

/**
 * set_bit - function to set a bit 1 in the index position
 * @n: the pointer to the number to set
 * @index: the position to set the 1
 * Return: 1 if is correct or -1 if its fail
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
