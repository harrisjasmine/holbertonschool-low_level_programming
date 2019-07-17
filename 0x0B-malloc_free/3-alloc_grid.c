#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 * @width: width of array passed in
 * @height: height of array passed in
 *
 * Return: pointer to a int array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, w;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
		if (grid == NULL)
			return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				while (i--)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
		for (w = 0; w < width; w++)
			grid[i][w] = 0;
	}
	/**
	for (w = 0; w < width; w++)
	*/
	return (grid);
}
