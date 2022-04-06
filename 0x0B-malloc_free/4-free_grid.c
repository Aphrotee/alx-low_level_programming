#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated by alloc_grid
 * @grid: 2D grid array
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
