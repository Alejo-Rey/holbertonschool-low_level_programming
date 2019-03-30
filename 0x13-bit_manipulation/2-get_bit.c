#include "holberton.h"

/**
 * get_bit - try
 * @n: as
 * @index: index
 * Return: count
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x = 0, y = 0;

	if (index > 64)
		return (-1);
	y = n >> index;
	x = y & 1;

	return (x);
}
