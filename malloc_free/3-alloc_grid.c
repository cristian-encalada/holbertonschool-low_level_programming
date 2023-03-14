#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input width
 * @height: input height
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	/** Allocating memory space */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		exit(1);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			exit(1);
		}
	}
	/** Initializing elements to 0*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}
	return (grid);
}
