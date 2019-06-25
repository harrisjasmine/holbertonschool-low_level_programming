#include "holberton.h"

/**
 * print_alphabet - function to print alphabet
 * Return: Always void.
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

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	while (counter <= 10)
	{
		print_alphabet();
		counter++;
	}
}
