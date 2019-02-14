#include "holberton.h"
/**
 * times_table - function to compare the letter
 *
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x;
	int y;
	int m;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			m = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
			else if (x == 0)
			{
				_putchar('0');
				_putchar(' ');
			}
			else if (m / 10 == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m % 10 + '0');
			}
			else if (y == 9)
			{
				_putchar(' ');
				_putchar(',');
				_putchar(m / 10 + '0' );
				_putchar(m % 10 + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
		}
	}
}
