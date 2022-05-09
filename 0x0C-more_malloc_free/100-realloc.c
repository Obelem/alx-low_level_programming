#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: size in bytes of allocated space of ptr
 * @new_size: size in bytes of the new memory block
 * Return: ptr, new_ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *clone_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size > old_size)
		new_ptr = malloc(new_size);

	/* assign ptr to clone_ptr to use pointer arithmetic */
	/* N/B: Did this bcos void pointers dont do arithmetic */
	clone_ptr = ptr;

	/* assigne old values to to new pointer */
	for (i = 0; i < old_size; i++)
		new_ptr[i] = clone_ptr[i];

	free(ptr);
	return (new_ptr);
}
