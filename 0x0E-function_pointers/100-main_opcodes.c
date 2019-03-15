#include <stdio.h>
#include <stdlib.h>

/**
 * main - optocode function
 * @ac: value a
 * @av: value b
 * Return: always something
 */
int main(int ac, char *av[])
{
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
