#include "holberton.h"

/**
 * _print_rev_recursion - function that prints string in reverse
 * @s: pointer to string being passed through
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
