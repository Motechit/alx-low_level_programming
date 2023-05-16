#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - It frees 2d array
 * @grid: Tis 2d grid
 * @height: It is the height dimension of grid
 * Description: It frees memory of grid
 * Return: Nothing is to be returned
 *
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
