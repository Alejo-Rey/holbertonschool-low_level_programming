#include "holberton.h"

/**
 * str_concat -
 * @
 * Return: 
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, e;
	char *x;
	
	for ( ; s1[a]; a++)
	{}
	for ( ; s2[b]; b++)
	{}
	e = a + b;
	x = malloc(sizeof(char) * e);

	for ( ; c < a; c++)
		x[c] = s1[c];
	for ( ; d < b; d++)
	{
		x[c] = s2[d];
		c++;
	}
	if (x == NULL)
		return (NULL);

	return (x);
}
