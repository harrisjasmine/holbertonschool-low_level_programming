#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 * @n:
 * Return: every minute of the day
 */

void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}

}
