#include "holberton.h"

/**
 * recursion_helper - function that returns square root
 * @squared_number: number passed in to find square root
 * @current_root: number to increment for help
 *
 * Return: current_root for the square root
 */

int recursion_helper(int squared_number, int current_root)
{
	if (current_root * current_root == squared_number)
		return (current_root);
	else if (current_root * current_root > squared_number)
		return (-1);
	else
		return (recursion_helper(squared_number, current_root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: is the number passed into the sqrt
 * Return: the natural square of n
 */

int _sqrt_recursion(int n)
{
	return (recursion_helper(n, 0));
}
