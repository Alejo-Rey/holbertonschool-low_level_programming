#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to sum the integers
 * @n: numbers of the integers
 * Return: return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers2;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(numbers2, n);

	for (x = 0; x < n; x++)
		sum += va_arg(numbers2, int);

	va_end(numbers2);

	return (sum);
}
