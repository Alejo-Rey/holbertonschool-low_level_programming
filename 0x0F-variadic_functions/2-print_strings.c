#include "variadic_functions.h"

/**
 * print_strings - funtion to print variadic funtion od strings
 * @separator: separator of the strings
 * @n: number of string
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int x;
	char *p;

	va_start(string, n);

	for (x = 0; x < n; x++)
	{
		p = va_arg(string, char *);

		if (p != NULL)
		{
			printf("%s", p);
		}
		if (separator != NULL && x < (n - 1))
			printf("%s", separator);
		if (p == NULL)
			printf("%p", p);
	}
	printf("\n");

	va_end(string);
}
