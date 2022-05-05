#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width parameter
 * @height: height parameter
 * Return: pointer to 2d array of int if success and NULL on
 * failure or if widht or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j, len, **x;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = (int **)malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		x[i] = (int *)malloc(sizeof(int) * width);

		if (x[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(x[j]);
			free(x);

			return (NULL);
		}
		len = 0;
		for (j = 0; j < width; j++)
			x[i][j] = len;
	}
	return (x);
}
