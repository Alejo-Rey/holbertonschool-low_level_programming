#include "holberton.h"
/**
 * swap_int - change pointers.
 *@a: value of int
 *@b: value of int
 * Return: Always 0.
 */
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);

	_putchar('\n');
}
