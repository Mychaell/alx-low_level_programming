#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D array
 * @grid: Pointer to a 2D array (grid)
 * @height: Height dimension of the grid
 * Description: Frees the memory of a grid created using alloc_grid
 * Return: Nothing
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
