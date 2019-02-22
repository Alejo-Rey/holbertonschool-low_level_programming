#include "holberton.h"

/**
 * _strcat - appends one array to another.
 * @dest: array 1
 * @src: array that is append
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len_s, len_d, count;

	for (len_s = 0; src[len_s]; len_s++)
	{}

	for (len_d = 0; dest[len_d]; len_d++)
	{
	}
	for (count = 0; count < len_s; count++)
		dest[len_d + count] = src[count];

	return (dest);
}
