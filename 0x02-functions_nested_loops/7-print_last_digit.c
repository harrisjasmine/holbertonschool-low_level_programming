#include "holberton.h"
/**
 * print_last_digit - function that prints last digit of a number
 * @r: integer passed through
 * Return: last digit of a number
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		r = r * (-1);

	n =	r % 10;
	_putchar('0' + n);
	return (n);

}
