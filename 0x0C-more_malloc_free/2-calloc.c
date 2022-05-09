#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of items
 * @size: size of items
 * Return: ptr;
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize memory values to 0 */
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
