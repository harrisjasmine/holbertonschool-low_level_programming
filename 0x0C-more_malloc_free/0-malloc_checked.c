#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: pointer
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *allo_mem;

	allo_mem = malloc(b);
		if (allo_mem == NULL)
			exit(98);

	return (allo_mem);
}
