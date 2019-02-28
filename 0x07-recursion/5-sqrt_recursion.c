#include "holberton.h"

/**
 * _pow - check the code for Holberton School students.
 * @i: pow number
 * @n: number to pow
 * Return: Always 0.
 */

int _pow(int i, int n)
{
	if (i * i < n)
		return (_pow(i + 1, n));
	if (i * i == n)
		return (i);
	else
		return (-1);
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: nomber to pow
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (_pow(1, n));
}
