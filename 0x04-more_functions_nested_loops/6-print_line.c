#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: formal parameter for number of times character printed
 * Return: 0 if successful
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
