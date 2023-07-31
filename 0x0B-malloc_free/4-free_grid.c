#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that create an array of char
 * @grid: hold the function for me
 * @height: hold the second one for me
 * Return: success
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}

