#include "holberton.h"

/**
 * puts2 - function that prints every other character
 * @str: pointer string passed into function
 */

void puts2(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; b < a; b++)
	{
		if (b % 2 == 0)
		_putchar(str[b]);
	}
	_putchar('\n');
}
