#include "holberton.h"

/**
  * *_strcpy - print elements in another array
  *
  * @dest: array destine
  * @src: array origin
  * Return: dest.
  */

char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count]; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';

	return (dest);
}
