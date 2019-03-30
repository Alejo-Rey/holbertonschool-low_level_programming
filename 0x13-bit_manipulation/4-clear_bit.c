#include "holberton.h"

/**
 * clear_bit - function to set a 0 in the index
 * @n: number tho set the 0
 * @index: the position to set the 0
 * Return: 1 if right else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 64)
		return (-1);
	x = x << index;
	x = ~x;
	*n = *n & x;
	return (1);
}
