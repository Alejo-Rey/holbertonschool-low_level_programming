#include "holberton.h"
/**
 * _pow - check the code for Holberton School students.
 * @x: int to power
 * @y: int power
 * Return: Always 0.
 */

unsigned int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}
/**
 * binary_to_uint - function to convert binary to decimal number
 * @b: the binary char
 * Return: the number converted or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0, sum = 0;
	int x = 0;

	while (b[x])
		x++;
	x--;
	for ( ; x >= 0; x--)
	{
		if (b[x] != 48 && b[x] != 49)
		       return (0);	
		sum += (int) (b[x] - 48) * (_pow(2,y));
		y++;
	}
	return (sum);
}
