#include "holberton.h"

/**
 * _abs - function that computres the absolute value of an integer
 * @i: passes through integer value
 * Return: absolute value of integer
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
