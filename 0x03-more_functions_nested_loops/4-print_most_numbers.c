#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int count = 0;

	while (count <= 9)
	{
		if (count != 2 && count != 4)
			_putchar(count + '0');
		count++;
	}
	_putchar('\n');
}
