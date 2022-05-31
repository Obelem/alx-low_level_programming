#include "main.h"

/**
 * get_endianness - checks he endianness
 * Return: 0 for big, 1 for lttle
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
