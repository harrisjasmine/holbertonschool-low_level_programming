#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *print_string;

	va_list args;

	va_start(args, n);

	if (separator)
		for (i = 0; i < n ; i++)
		{
			if (i < n - 1)
			{
				value = va_arg(args,const unsigned int);
				printf("%d%s ", value, separator);
			}
			else
			{
				value = va_arg(args, const unsigned int);
				printf("%d\n", value);
			}
		}
	if (separator == NULL)
	{
		for (i = 0; i < n ; i++)
		{
			value = va_arg(args,const unsigned int);
			printf("%d ", value);
		}
		printf("\n");
	}
}
