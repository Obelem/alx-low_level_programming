#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);

	/* Gets number of values b/w min and max */
	len = (max - min) + 1;

	ptr = malloc(len * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
