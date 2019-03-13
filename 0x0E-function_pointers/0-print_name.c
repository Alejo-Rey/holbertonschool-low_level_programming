#include "function_pointers.h"

/**
 * print_name - pointer to function for print a name
 * @name: name called in the function
 * @f: pointer of the function
 * Return: maybe
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
