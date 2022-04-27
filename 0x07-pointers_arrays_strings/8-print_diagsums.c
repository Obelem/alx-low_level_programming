#include "main.h"

/**
 * print_diagsums - prints sum of the two diagonals of matrix
 *
 * @a: array decayed to pointer
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int row_size = size;

	size = size * size;

	/*main diagonal*/
	int i = 0, n1 = 0, sum1 = 0;

	while (n1 < size - 1)
	{
		n1 = i * (row_size + 1);
		sum1 = sum1 + a[n1];
		i++;
	}

	/*aux diagonal*/
	int n2 = 0, sum2 = 0;

	i = 1;
	while (size - n2 != row_size)
	{
		n2 = i * (row_size - 1);
		sum2 = sum2 + a[n2];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
