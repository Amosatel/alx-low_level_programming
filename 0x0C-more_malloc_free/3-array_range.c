#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range to be included
 * @max: maximum range included
 * Return: pointer to array created
 */

int *array_range(int min, int max)
{
	int *ptr;
	int x, diff;

	if (min > max)
		return (NULL);

	diff = max - min + 1;

	ptr = malloc(sizeof(int) * diff);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}

