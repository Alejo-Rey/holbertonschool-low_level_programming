#include "holberton.h"
/**
 * print_last_digit - function to compare the letter
 *
 * @n : variable to compare the letter
 *
 * Description: compare the letters
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
	else
		_putchar((l * -1) + '0');
		return (l * -1);
}
