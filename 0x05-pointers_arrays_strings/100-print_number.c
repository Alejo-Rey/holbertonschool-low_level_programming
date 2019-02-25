#include "holberton.h"

/**
 * print_number - change the lowcase to the uppercase
 * @n: string to change
 * Return: str
 */

void print_number(int n)
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
