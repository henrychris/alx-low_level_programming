#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid to be freed
 * @height: height of the grid
 * Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
