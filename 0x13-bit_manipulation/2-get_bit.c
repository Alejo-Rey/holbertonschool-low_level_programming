#include "holberton.h"

/**
 * get_bit - try
 * @n: as
 * @index: index
 * Return: count
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	while (n > index)
	{
		count++;
		n >>= 1;
	}
	return (count);
}
