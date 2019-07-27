#include "holberton.h"

/**
 * print_most_numbers - function that prints most numbers from 0 to 9
 * Return: nothing
 */

void print_most_numbers(void)
{
	int current_ascii_number = 48;
	int last_ascii_number = 58;

	for(; current_ascii_number < last_ascii_number; current_ascii_number++)
	{
		if (current_ascii_number == 50 || current_ascii_number == 52)
		{
			continue;
		}

		_putchar((char) current_ascii_number);
	}

	_putchar('\n');
}
