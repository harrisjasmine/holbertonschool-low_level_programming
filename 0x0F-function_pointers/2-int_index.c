#include <stdio.h>

/**
 *
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
					return (i);
		}
			return (-1);
	}

	return (0);
}

