#include "holberton.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: number of buffer
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	for ( ; count < n; count++)
		dest[count] = src[count];

	return (dest);
}
