#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 * @a: the name of array
 * @n: the long of the array
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count != n - 1)
			printf(", ");
	}
	printf("\n");
}
