#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array to grid
 * @height: height of grid
 * @width: width of grid
 *
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(int) * width * height);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	free(grid);
	return (grid);
}
