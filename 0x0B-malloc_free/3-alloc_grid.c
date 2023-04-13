#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2D array
 * @width: width input
 * @height: height input
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **tai;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	tai = malloc(sizeof(int *) * height);

	if (tai == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		tai[x] = malloc(sizeof(int) * width);

		if (tai[x] == NULL)
		{
			for (; x >= 0; x--)
				free(tai[x]);

			free(tai);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			tai[x][y] = 0;
	}

	return (tai);
}

