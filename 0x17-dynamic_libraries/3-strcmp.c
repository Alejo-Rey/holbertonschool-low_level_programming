#include "holberton.h"

/**
 * _strcmp - compare an array to another.
 * @s1: array 1
 * @s2: array 2.
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int len, dif = 0;

	for (len = 0; (s1[len] || s2[len]) && dif == 0; len++)
	{
		dif = s1[len] - s2[len];
	}

	return (dif);
}
