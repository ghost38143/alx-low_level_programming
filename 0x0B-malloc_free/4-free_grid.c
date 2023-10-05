#include "main.h"
/**
 * free_grid - function frees a 2 dim grid prev created by your alloc_grid
 * @grid: ...
 * @height: ...
 * Return: ...
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

