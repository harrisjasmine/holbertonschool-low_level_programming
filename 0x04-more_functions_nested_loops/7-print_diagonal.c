#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: integer parameter for number of times a character should print
 * Return: 0 if successful
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
