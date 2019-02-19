#include "holberton.h"

/**
 * swap_int - change pointers.
 *@a: value of int
 *@b: value of int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
