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
	int **d, **grid = malloc((sizeof(int) * width * height));
	int i, j;

	d = grid;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[j][i] = 0;
		}
	}
	free(grid);
	return (d);
}
