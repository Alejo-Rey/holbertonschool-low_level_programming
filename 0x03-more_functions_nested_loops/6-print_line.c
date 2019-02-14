#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 *
 * @n: number of the lines
 * Return: Always 0.
 */
void print_line(int n)
{
	int count = 1;

	while (count <= n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
