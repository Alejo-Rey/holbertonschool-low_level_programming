#include "holberton.h"
/**
 * print_rev -  change pointers.
 * @s: value of int
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}

	count--;
	for (; count  >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
