#include "main.h"

/**
 * free_grid - frees a 2 dimentional grid
 * @grid: number of colums
 * @height: number of rows
 * Return: a pointer to the freed array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
