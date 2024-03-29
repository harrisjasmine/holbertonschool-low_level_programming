#include "holberton.h"

/**
 * _strlen_recursion - function that returns length of a string
 * @s: pointer to string being used
 * Return: sum from the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
