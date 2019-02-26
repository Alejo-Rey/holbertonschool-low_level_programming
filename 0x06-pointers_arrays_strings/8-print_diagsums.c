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
	int count, count2, sum1 = 0, sum2 = 0;

	for (count = 0; count < (size * size); count++)
	{
		sum1 += *(a + count);
		count += size;
	}
	for (count2 = (size - 1); count2 < (size * size); count2++)
	{
		sum2 += *(a + count2);
		count2 += size - 2;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
