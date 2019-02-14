#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int count = 0;

	while (count <= 9)
	{
		_putchar(count + '0');
		count++;
	}
	_putchar('\n');
}
