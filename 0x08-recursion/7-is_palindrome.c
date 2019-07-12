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

int check(char *start, char *end)
{
	if (*start == *end)
	{
		check((start + 1), (end - 1));
		return (1);
	}
	else
		return (0);
}

int is_palindrome(char *s)
{
	int x;

	x = _strlen_recursion(s);
	return (check(s, s +  x - 1));
}
