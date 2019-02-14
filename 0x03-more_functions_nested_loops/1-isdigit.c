#include "holberton.h"

/**
 * _isdigit - check the code for Holberton School students.
 *
 *@c: the number
 * Return: Always 0.
 */
int _isdigit(int c)
{
	return ((c >= 48  && c <= 57) ? 1 : 0);
}
