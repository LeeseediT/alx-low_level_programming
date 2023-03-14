#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2D grid previously created
 * @grid: previously created 2D grid
 * @height: height of grid
 * Return: nothing to return
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
