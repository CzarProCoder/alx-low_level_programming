#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2 dimensional arrays of int
 * @width: Width
 * @height: Height
 * Return: Pointer to an array of pointers
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	k = width * height;

	ptr = malloc(k * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[j] = 0;
	}
	return (ptr);
}
