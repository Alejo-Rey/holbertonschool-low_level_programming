#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - poinr funtion to callcack the operators
 * @s: operator
 *
 * Return: return the result of the operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (1 <= 5)
	{
		if (ops[i] == *s)
			return (ops[i]);
		i++;
	}
	return (0);
}
