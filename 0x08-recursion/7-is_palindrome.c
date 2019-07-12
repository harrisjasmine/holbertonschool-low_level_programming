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

/**
 * check - check if letters equal each other
 * @start: character pointer set the beginning
 * @end: character pointer set the end
 *
 * Return: 1 if palindrom, 0 if not
 */

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

/**
 * is_palindrome - function to check if string is a palindrome
 * @s: character pointer to check if palindrome
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int x;

	x = _strlen_recursion(s);
	return (check(s, s +  x - 1));
}
