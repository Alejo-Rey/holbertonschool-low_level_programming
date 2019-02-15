#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 *
 * @n: number of the diagonals
 * Return: Always 0.
 */
void print_square(int n)
{
	int count;
	int count2;

		if (n <= 0)
			_putchar('\n');

		for (count = 0; count < n; count++)
		{
			for (count2 = 0; count2 < n / 2; count2++)
			{
				_putchar('#');
				_putchar('#');
			}
			_putchar('\n');
		}
}
