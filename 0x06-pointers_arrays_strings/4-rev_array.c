#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function that reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elements to reverse
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i != --n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
