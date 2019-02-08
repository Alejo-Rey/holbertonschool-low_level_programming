#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abc;
	int ab;

	for (abc = 0; abc < 10; abc++)
	{
		for (ab = 0; ab < 10; ab++)
		{
			if (ab != abc)
			{
				if (ab > abc)
				{
					putchar(abc % 10 + '0');
					putchar(ab % 10 + '0');
					if (ab < 9 || abc < 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
