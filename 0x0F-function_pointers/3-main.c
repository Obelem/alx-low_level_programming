#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0, always success
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = ptr(a, b);
	printf("%d\n", c);

	return (0);
}
