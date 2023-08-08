#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Deallocates the memory of a 2D grid
 * @grid: Pointer to the grid
 * @height: Height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	 return;

	for (i = 0;i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
