#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, i, end;

	if (!array || size == 0)
		return (-1);

	end = sqrt(size);

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && start < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end = end + sqrt(size);
		if (end > size - 1)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	i = start;
	while (i <= end && end <= size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (-1);
}
