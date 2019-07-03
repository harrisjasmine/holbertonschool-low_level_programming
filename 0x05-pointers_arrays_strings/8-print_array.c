#include <stdio.h>
#include "holberton.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer to an array of integers
 * @n: number passed in to print
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n ; b++)
	{
		if (b == (n - 1))
			printf("%d", (a[b]));
		else
		printf("%d, ", (a[b]));
	}
	putchar('\n');
}
