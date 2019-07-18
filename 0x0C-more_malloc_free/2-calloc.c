#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of indexes
 * @size: bytes per index
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *fakecal;
	unsigned int i, total;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	total = nmemb * size;

	fakecal = malloc(total);
		if (fakecal == NULL)
			return (NULL);
	for (i = 0; i < total; i++)
		fakecal[i] = 0;

	return (fakecal);
}
