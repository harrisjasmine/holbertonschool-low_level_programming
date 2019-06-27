#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: 0 is successful
 */

void print_numbers(void)
{
	int	current_ascii_number = 48;
	int last_number = 57;

	while (current_ascii_number <= last_number)
	{
		_putchar(current_ascii_number);
		current_ascii_number++;
	}
	_putchar('\n');
}
