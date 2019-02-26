#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints buffer in hexa
 * @a: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int count, count2;

	for (count = 0; count < size; count++)
	{
		for (count2 = 0; count2 < size; count2)
		{
			if (count == count2)
				printf("%d, ", a[count] + a[count2]);
		}
		printf("%d", a[count] + (a[count2] - count));
	}
}
