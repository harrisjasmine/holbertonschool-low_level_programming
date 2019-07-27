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

	if (separator == NULL)
		separator = "";

		for (i = 0; i < n ; i++)
		{
			if (i < n - 1)
			{
				print_string = va_arg(args, char *);
				if (print_string == NULL)
					printf("(nil)%s ", separator);
				else
					printf("%s%s ", print_string, separator);
			}
			else
			{
				print_string = va_arg(args, char *);
				if (print_string == NULL)
					 printf("(nil)\n");
				else
				printf("%s\n", print_string);
			}
		}
}
