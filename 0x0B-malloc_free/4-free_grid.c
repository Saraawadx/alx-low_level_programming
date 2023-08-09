#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 *             previously created by your alloc_grid function
 * @grid: memory grids
 * @height: height input
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < heght; i++)
		free(grid[i]);
	free(grid);
}
