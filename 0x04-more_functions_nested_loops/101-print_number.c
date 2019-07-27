#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: integer passed in to be printed
 */

void print_number(int n)
{
	int m;

	if (n > 0)
		m = n;
	if (n == 0);
		_putchar('0');
		return;
	if (n < 0)
	{
		_putchar('-');
		m = -n
	}
	if (m < 10)
		_putchar( m % 10);
	m = m /10;
	print_number(m);
}
