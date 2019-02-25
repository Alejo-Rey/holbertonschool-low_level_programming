#include "holberton.h"

/**
 * leet - change the lowcase to the uppercase
 * @str: string to change
 * Return: str
 */

char *leet(char *str)
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
