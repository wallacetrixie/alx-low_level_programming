#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2D array (grid)
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to a 2D array, or NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < height)
	{
		for (y = 0; y < width)
		{
			mee[x][y] = 0;
		}
	}

	return (mee);
}

