#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array to grid
 * @height; height of grid
 * @width: width of grid
 *
 * Reurn: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **grid = malloc((sizeof(int) * width) * (sizeof(int) * height));
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
