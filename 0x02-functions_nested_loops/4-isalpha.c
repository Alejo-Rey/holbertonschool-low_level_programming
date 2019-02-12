#include "holberton.h"
/**
 * _isalpha - function to compare the letter
 *
 * @c : variable to compare the letter
 *
 * Description: compare the letters
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <=  'Z')
	{
		return (1);
	} else
		return (0);
}
