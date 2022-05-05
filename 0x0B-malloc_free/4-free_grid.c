#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid prev created
 * @grid: address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
