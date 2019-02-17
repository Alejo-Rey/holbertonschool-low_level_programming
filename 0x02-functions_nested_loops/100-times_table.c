#include "holberton.h"
/**
 * print_times_table- function to compare the letter
 *
 * @n: variable b
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int count, count2, mult;

	if (n < 15 && n != 0)
	{
		for (count = 0; count <= n; count++)
		{
			for (count2 = 0; count2 <= n; count2++)
			{
				mult = count * count2;

				if (mult / 100 == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((mult / 100) + '0');
				}
				if (mult / 10 == 0 && mult < 100)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((mult / 10) % 10 + '0');
				}
				_putchar((mult % 10) + '0');
				if (count2 < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
