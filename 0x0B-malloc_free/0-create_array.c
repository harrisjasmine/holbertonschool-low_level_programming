#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars
 * @size: length of the array
 * @c:character passed in
 *
 * Return: pointer to the array or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (0);

	array = (char *)malloc(size * sizeof(char));

	if (array == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
