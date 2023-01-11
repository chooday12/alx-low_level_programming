#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid creatd in alloc_grid
 * @grid: pointer to pointer
 * @height: height of grid
 *
 * Return: return a pointer of pointer or null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
