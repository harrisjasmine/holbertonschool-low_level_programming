#include "holberton.h"

/**
 * _isupper - writes a fnction that checks for the uppercase character
 * @c: formal int parameter for c
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
