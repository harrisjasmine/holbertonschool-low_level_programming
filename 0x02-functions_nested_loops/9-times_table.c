#include "holberton.h"
/**
 * times_table - function that prints 9 times table
 * @void: no parameters
 * Return:
 */

void times_table(void)
{
	int r;
	int c;
	int x;

	for (r = 0 ; r <= 9 ; r++)
	{
		for (c = 0 ; c <= 9 ; c++)
		{
			x = r * c;

			if (c != 0)
				_putchar(',');
			if (x < 10)
			{
				if (c != 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(x + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');

			}
		}
		_putchar('\n');
	}
}
