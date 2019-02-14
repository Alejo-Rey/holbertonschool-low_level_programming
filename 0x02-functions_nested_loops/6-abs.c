#include "holberton.h"
/**
 * _abs - function to compare the letter
 *
 * @n : variable to compare the letter
 *
 * Description: compare the letters
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n * 1);
}
