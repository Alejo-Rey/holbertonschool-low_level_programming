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
	int count, valor, div = 0, res = 0;
	int money[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	valor = atoi(argv[1]);
	if (valor < 0)
	{
		printf("0\n");
		return (1);
	}

	for (count = 0; money[count] != '\0'; count++)
	{
		if (valor >= money[count])
		{
			div += valor / money[count];
			res = valor % money[count];
			valor = res;
		}
	}
	printf("%i\n", div);
	return (0);
}
