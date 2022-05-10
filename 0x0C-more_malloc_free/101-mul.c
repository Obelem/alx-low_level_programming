#include "main.h"
#include <ctype.h>

/**
 * main - multiplies tow positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0, Always Success
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	return (0);
}
