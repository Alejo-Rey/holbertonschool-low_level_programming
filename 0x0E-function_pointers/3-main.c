#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion to callback all the operators
 * @ac: numbers of arguments
 * @av: arguments
 * Return: int
 */
int main(int ac, char *av[])
{
	int num1, num2;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*av[2] != '+' || *av[2] != '-' || *av[2] != '*'
			|| *av[2] != '/' || *av[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*av[2] == '/' && (atoi(av[3]) == 0))
			|| (*av[2] == '%' && (atoi(av[3]) == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	printf("d%\n", (*get_op_func(av[2]))(num1, num2));
	return (0);
}
