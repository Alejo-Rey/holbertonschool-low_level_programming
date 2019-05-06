#include "holberton.h"

/**
 * _strncat - appends one array to another.
 * @dest: array 1
 * @src: array that is append
 * @n: naumber of the array.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_d, count;

	for (len_d = 0; dest[len_d]; len_d++)
	{}
	for (count = 0; n > count && src[count]; count++)
	{
		dest[len_d + count] = src[count];
	}

	dest[len_d + count] = '\0';

	return (dest);
}
