#include "holberton.h"

/**
 * print_triangle - function that prints a triangle
 * @size: parameter that passes through size of triangle
 * Return: 0 if successful
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 0; a < size; a++)
	{
		int hash_start_index = size - a - 1;

		for (b = 0; b < size; b++)
		{
			if (b < hash_start_index)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}

}
