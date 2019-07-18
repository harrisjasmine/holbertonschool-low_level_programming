#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *allo_mem;

	allo_mem = malloc(sizeof(unsigned int) * b);
		if (allo_mem == NULL)
			exit(98);

	return(allo_mem);
}
