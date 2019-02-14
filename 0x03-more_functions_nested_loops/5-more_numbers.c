#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int count;
	int count2;

	for (count = 1; count <= 10; count++)
	{
		for (count2 = 0; count2 <= 14; count2++)
		{
			if (count2 > 10)
			{
				_putchar(count2 / 10 + '0');
			}
			_putchar(count2 % 10 + '0');
		}
		_putchar('\n');
	}
}
