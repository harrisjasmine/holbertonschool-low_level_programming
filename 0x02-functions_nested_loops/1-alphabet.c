#include "holberton.h"

/**
 * print_alphabet - function to print alphabet
 * @void: no parameters
 * Return: Always void
 */

void print_alphabet(void)
{
	int current_ascii_number = 97;
	int last_ascii_number = 122;

	while (current_ascii_number <= last_ascii_number)
	{
		_putchar((char) current_ascii_number);

		current_ascii_number++;
	}

	_putchar('\n');
}
