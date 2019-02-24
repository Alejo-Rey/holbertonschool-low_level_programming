#include "holberton.h"
/**
 * reverse_array -  change pointers.
 * @a: value of int
 * @n: number of characters
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int count, temp, count2 = 0;

	for (count = 0; count < n; count++)
	;
	count--;

	for ( ; count2 < count / 2; count2++)
	{
		temp = a[count2];
		a[count2] = a[count - count2];
		a[count - count2] = temp;
        }
}
