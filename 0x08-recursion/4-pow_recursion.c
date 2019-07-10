#include "holberton.h"

/**
 * _pow_recursion - function that returns value of x raised to power of y
 * @x: is the base
 * @y: exponent
 * Return: integer with the exponential product
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
