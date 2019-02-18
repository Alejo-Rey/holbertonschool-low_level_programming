#include <stdio.h>

/**
 * _isdigit - check the code for Holberton School students.
 *
 *@c: the number
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for (count = 1; count < 101; count++)
	{
		if (count % 5 && count % 3)
		{
			printf("FizzBuzz");
		}
		else if(count % 5 == 0)
		{
			printf("Buzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", count);
		}
	}
	return 0;
}
