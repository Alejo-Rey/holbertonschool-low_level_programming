#include "holberton.h"
/**
 * jack_bauer - function to compare the letter
 *
 *
 *
 * Return: Always 0.
 */
int jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24 ; h++)
	{
		for (m = 0; m < 60 ; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
	return (0);
}
