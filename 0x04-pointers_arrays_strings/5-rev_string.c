#include "holberton.h"
/**
 * rev_string -  change pointers.
 * @s: value of int
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int count;
	int count2;
	int count3;

	for (count = 0; s[count]; count++)
	{
	}

	for (count2 = 0; count2 < count / 2; count2++)
	{
		count3 = s[count2];
		s[count2] = s[count - count2 - 1];
		s[count - count2 - 1] = count3;
	}
}
