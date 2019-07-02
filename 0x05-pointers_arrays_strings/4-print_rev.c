#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: pointer for string s
 */

void print_rev(char *s)
{
	int a;
 	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		;
	}
	for (b = a; b >= 0 ; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
