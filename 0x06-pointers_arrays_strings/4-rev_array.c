#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function that reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elements to reverse
 */

void reverse_array(int *a, int n)
{
	int temp;
	int *end = a + n -1;
	int *start = a;

	for (; start < end; start++, end--)
	{
		temp = *start;
		*start = *end;
		*end = temp;
	}
}
