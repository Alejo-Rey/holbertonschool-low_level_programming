#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 *
 * @size: number of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int count;
	int count2;

		if (size <= 0)
			_putchar('\n');

		for (count = 0; count < size; count++)
		{
			for (count2 = 0; count2 < size / 2; count2++)
			{
				_putchar('#');
				_putchar('#');
			}
			_putchar('\n');
		}
}
