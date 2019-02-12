#include "holberton.h"
/**
 * print_alphabet - print the alphanbet.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
	return (0);
}
