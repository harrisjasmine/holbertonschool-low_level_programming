#include <holberton.h>

/**
 * main - function that checks for lowercase character
 *
 *Return: Always 0
 */

int _islower(int c)
{
	while (c >= 97 && c <= 122)
	{
		_putchar('1');
		if (c >= 60 && c <= 90)
			_putchar('0');
	}
}
