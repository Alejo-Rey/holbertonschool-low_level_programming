#include "holberton.h"
#include <stdio.h>

/**
 * set_string - prints buffer in hexa
 * @s: the address of memory to print
 * to: the size of the memory to print
 * Return: Nothing.
 */

void set_string(char **s, char *to)
{
	int count, count2;
	/*int size = sizeof(s)/sizeof(char);*/

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count2 = 0; to[count] != '\0'; count2)
		{
			if (count == count2)
				printf("%d, ", s[count] + to[count2]);
		}
		printf("%d", s[count] + (to[count2] - count));
	}
}
