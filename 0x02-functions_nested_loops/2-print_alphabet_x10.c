#include "holberton.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * @void: void variable
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
