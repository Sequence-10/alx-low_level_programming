#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - a function that create an array of char
 * @width: hold the function for me
 * @height: hold the second one for me
 * Return: success
 */

int **alloc_grid(int width, int height)
{
	int m, n, q, r;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		ptr[m] = malloc(sizeof(int) * width);
		if (ptr[m] == NULL)
		{
			for (n = m; n >= 0; n--)
			{
				free(ptr[n]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (q = 0; q < height; q++)
	{
		for (r = 0; r < width; r++)
		{
			ptr[q][r] = 0;
		}
	}
	return (ptr);
}

