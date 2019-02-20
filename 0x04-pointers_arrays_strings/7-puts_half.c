#include "holberton.h"

/**
  *puts_half - print the second half of array
  *
  *@str: name of array
  *
  * Return: 0
  */

void puts_half(char *str)
{
	int count, len;

	for (len = 0; str[len]; len++)
	{}
	for (count = 0; str[count]; count++)
	{
		if (count > (len - 1) / 2)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
