#include "holberton.h"

/**
 * _strcat - appends one array to another.
 * @dest: array 1
 * @src: array that is append
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len, count;

	for (len = 0; src[len]; len++)
	{}

	for (count = 0; src[count]; count++)
	{
		dest[len + count] = src[count];
	}
	dest[len + count] = '\0';

	return (dest);
}
