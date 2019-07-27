#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

		for (i = 0; i < n ; i++)
		{
			if (i < n - 1)
			{
				value = va_arg(args, int);
				printf("%d%s ", value, separator);
			}
			else
			{
				value = va_arg(args, int);
				printf("%d\n", value);
			}
		}
}
