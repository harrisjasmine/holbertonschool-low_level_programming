#include "holberton.h"

/**
 * swap_int - function that swaps the value of two integers
 * @*a: integer pointer
 * @*b: integer pointer
 */

void swap_int(int *a, int *b)
{
	int swap1;

	swap1 = *a;
	*a = *b;
	*b = swap1;
}
