#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocates memories
 * @width: Width of grid
 * @height: Height of grid
 *
 * Return: Pointer of alloc or NULL
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int a, b;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	g = (int **)malloc(height * sizeof(int *));
	if (g == NULL)
	{
	return (NULL);
	}

	for (a = 0; a < height; a++)
	{
	g[a] = (int *)malloc(width * sizeof(int));
	if (g[a] == NULL)
	{
	for (b = 0; b < a; b++)
		free(g[b]);
	free(g);
	return (NULL);
	}
	for (b = 0; b < width; b++)
		g[a][b] = 0;
	}
	return (g);
}
