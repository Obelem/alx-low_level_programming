#include "main.h"

/**
 * set_bit - sets bit of a given index to 1
 * @n: pointer to number
 * @index: index of bit
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
