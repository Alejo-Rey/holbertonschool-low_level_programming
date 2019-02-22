#include "holberton.h"

/**
 * _strncpy - appends one array to another.
 * @dest: array 1
 * @src: array that is append
 * @n: naumber of the array.
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; n > count && src[count]; count++)
	{
		dest[count] = src[count];
	}

	dest[count] = '\0';

	return (dest);
}
