#include "holberton.h"

/**
 * _strcmp - compare an array to another.
 * @s1: array 1
 * @s2 array 2.
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2;

	for (len_s1 = 0; s1[len_s1]; len_s1++)
	{}
	for (len_s2 = 0; s2[len_s2]; len_s2++)
	{}
	if (len_s1 < len_s2)
		return (-15);
	else if (len_s2 < len_s1)
		return (15);
	else
		return (0);
}
