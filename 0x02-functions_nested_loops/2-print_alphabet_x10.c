#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet_x10(void)
{
	int abc;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');

	}
	return (0);
}
