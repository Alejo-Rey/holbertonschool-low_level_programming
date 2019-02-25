#include "holberton.h"

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: number of buffer
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count;

	for (count = 0; s[count] == s[n - 1]; count++)
		s[count] = b;

	return (s);
}
