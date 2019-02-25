#include "holberton.h"

/**
 * infinite_add - change the lowcase to the uppercase
 * @n1: string to change
 * @n2: 321654
 * @r: 654654
 * @size_r: 987654
 *
 * Return: str
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count = 0;

	for (; str[count]; count++)
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] = str[count] - 32;
		}
	}
	return (str);
}
