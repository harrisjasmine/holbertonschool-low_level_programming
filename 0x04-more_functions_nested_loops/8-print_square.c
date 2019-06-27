#include "holberton.h"

/**
 * print_square - function that prints a square
 * @size: integer representing size of square to print
 * Return: 0 if successful
 */

void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
