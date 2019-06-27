#include "holberton.h"

/**
 * more_numbers - function that prints 10 times numbers from 0 to 14
 * Return: 0 if successful
 */

void more_numbers(void)
{
	int a, b;

	b = 0;

	while (b <= 9)
	{	b++;
		a = 0;

		while (a <= 14)
		{
			if (a >= 10 && a <= 14)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
			_putchar('\n');
	}
}
