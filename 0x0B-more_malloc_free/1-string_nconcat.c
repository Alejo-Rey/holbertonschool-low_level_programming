#include "holberton.h"
/**
 * string_nconcat - cancatenate two strings with allocate
 * @s1: string one
 * @s2: string two
 * @n: number of the characters of s2
 * Return: always something
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	char *x;

	for (a = 0; s1[a]; a++)
		;
	for (b = 0; s2[b]; b++)
		;
	x = malloc(a + n + 1);

	if (x == NULL)
	{
		x = "";
		return (NULL);
	}

	for (c = 0; c < a; c++)
		x[c] = s1[c];
	for (d = 0; d < n; d++)
	{
		x[c] = s2[d];
		c++;
	}
	return (x);
}
