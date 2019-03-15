#include "variadic_functions.h"

/**
 * print_numbers - variadic function to print the integers
 * @separator: separator of the int
 * @n: numbers of the integers
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int x;

	va_start(numbers, n);

	if (separator != NULL && n != 0)
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(numbers, int));
			if (x < n - 1)
				printf("%s ", separator);
		}
		printf("\n");
	}
	va_end(numbers);
}
