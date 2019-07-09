#include "holberton.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * @void: void variable
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int start = 'a';
	int end = 'z';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (start = 'a'; start <= end; start++)
		{
			_putchar(start);
		}

		_putchar('\n');
	}
}
