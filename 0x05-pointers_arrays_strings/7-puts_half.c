#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer for string
 */

void puts_half(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; b < a; b++)
	{
		if (b > (a - 1) / 2)
			_putchar(str[b]);
	}
	_putchar('\n');
}
