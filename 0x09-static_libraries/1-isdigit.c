#include "holberton.h"

/**
 * _isdigit - Add function that checks for a digit
 * @c: integer parameter passed
 * Return: 1 if the c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
