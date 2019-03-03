#include <stdio.h>

/**
  * main - count the arguments
  * @argc: arguments count
  * @argv: arguments vector
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	if (*argv)
		printf("%i\n", argc - 1);
	return (0);
}
