#include <stdio.h>
#include <stdlib.h>

/**
  * main - print argv
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: always 0.
  */

int main(int argc, char *argv[])
{
	int int1, int2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int1 = atoi(*(argv + 1));
	int2 = atoi(*(argv + 2));
	printf("%i\n", int1 * int2);
	return (0);
}
