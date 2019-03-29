#include "holberton.h"

/**
 * countbit - funtion to count the bit of int
 * @n: the int;
 * Return: x
 */
unsigned int countbit(unsigned int n)
{
	unsigned int x = 0;

	while (n)
	{
		x++;
		n >>= 1;
	}
	return (x);
}

/**
 * print_binary - funtion to convert the dicemal to binary
 * @n: the variable decimal
 * Return: non
 */
void print_binary(unsigned long int n)
{
	int x, y, z;

	z = countbit(n);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (x = z - 1; x >= 0; x--)
	{
		y = n >> x;
		if (y & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	_putchar('\n');
}
