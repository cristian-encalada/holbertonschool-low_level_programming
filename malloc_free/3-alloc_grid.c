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
	/** Allocating memory space */
	grid = (int **)malloc(width * sizeof(int *));
	if (grid == NULL)
		exit(1);
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
		if (grid[i] == NULL)
			exit(1);
	}
	/** Initializing elements to 0*/
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		grid[i][j] = 0;
	}
	return (grid);
}
