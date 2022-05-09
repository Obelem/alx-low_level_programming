#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize memory values to 0 */
	for (i = 0; i < nmemb; i++)
		ptr[i] == 0;

	return (ptr);
}
