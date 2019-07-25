#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: number passed in to print
 */

void print_number(int n)
{
	unsigned int m;
	unsigned int rem;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		m = n;

	if (m > 0)
	{
		rem = m % 10;
		if (m / 10 > 0)
		{
			print_number(m / 10);
		}
		_putchar(rem + '0');
	}
}
