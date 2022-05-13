#include "function_pointers.h"

/**
 * array_iterator - executes a callback on each array element
 * @array: array to iterate over
 * @size: size of array
 * @action: call back function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
