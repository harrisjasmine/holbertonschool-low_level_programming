#include "holberton.h"

/**
 * _islower - function that checks for lowercase character
 * @c: ASCII value for character
 *Return: 1 if c is lowercaase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
