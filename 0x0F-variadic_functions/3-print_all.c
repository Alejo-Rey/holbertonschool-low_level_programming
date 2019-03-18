#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: type of yhe element to print
 *
 */
void print_all(const char * const format, ...)
{
	va_list all;
	char *p;
	int y = 0;

	va_start(all, format);

	while (format[y] != '\0' && format)
	{
		switch (format[y])
		{
		case 'c':
			printf("%c", va_arg(all, int));
			break;
		case 'i':
			printf("%i", va_arg(all, int));
			break;
		case 'f':
			printf("%f", va_arg(all, double));
			break;
		case 's':
			p = va_arg(all, char*);
			if (p == NULL)
			{
				printf("%p", p);
				break;
			}
			printf("%s", p);
			break;
		default:
			y++;
			continue;
		}
		if (format[y + 1] != '\0')
			printf(", ");
		y++;
	}
	printf("\n");
	va_end(all);
}
