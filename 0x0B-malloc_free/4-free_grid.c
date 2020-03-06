#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: Address of the 2 dimensinal array.
 * @height :height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i = 0;


	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
