#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abc;

	for (abc = 0; abc < 10; abc++)
	{
		putchar(abc % 10 + '0');
	}

	putchar('\n');
	return (0);
}
