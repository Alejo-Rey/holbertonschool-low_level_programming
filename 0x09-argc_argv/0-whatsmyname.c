#include <stdio.h>

/**
  * main - print argv
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: always 0.
  */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
