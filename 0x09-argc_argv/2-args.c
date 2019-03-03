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
	int count;

	if (argc > 0)
	{
		for (count = 0; *(argv + count); count++)
		{
			printf("%s\n", *(argv + count));
		}
	}
	return (0);
}
