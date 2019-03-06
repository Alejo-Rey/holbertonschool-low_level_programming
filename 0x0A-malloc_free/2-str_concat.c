#include "holberton.h"

/**
 * str_concat - function for concatenate
 * @s1: string 1
 * @s2: string2
 * Return: New pointer
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *x;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for ( ; s1[a]; a++)
	{}
	for ( ; s2[b]; b++)
	{}
	b++;
	x = malloc(sizeof(char) * a + b);

	if (x == NULL)
		return (NULL);
	for ( ; c < a; c++)
		x[c] = s1[c];
	for ( ; d < b; d++)
	{
		x[c] = s2[d];
		c++;
	}

	return (x);
}
