#include "holberton.h"
/**
 * _isupper  - compare alphabet.
 *
 * @c: letter to compare
 * Return: Always 0.
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
