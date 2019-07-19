#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min:
 * @max:
 *
 * Return:
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
		if (a == NULL)
			return (NULL);
	for (i = 0; min <= max; i ++, min++)
		a[i] = min;

	return (a);
}
