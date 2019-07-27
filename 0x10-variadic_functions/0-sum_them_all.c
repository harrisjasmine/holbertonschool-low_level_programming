#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments supplied
 *
 * Return: sum of all of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value;
	int sum = 0;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, const unsigned int);

		sum = sum + value;
	}

	return (sum);
}
