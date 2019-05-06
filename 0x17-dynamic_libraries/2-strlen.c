#include "holberton.h"
/**
 * _strlen - change pointers.
 *@s: value to change
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count;
	int leng = 0;

	for (count = 0; s[count] != '\0'; count++)
		leng++;

	return (leng);

}
