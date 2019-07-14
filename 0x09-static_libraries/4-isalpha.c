#include "holberton.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: ASCII value for a character
 * Return: 1 if c is an alphabetic letter or 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
