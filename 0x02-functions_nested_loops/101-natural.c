#include <stdio.h>

/**
 * main - check for multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 1024, y, sum = 0;

	for (y = 0; y < x; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
		{
			sum = sum + y;
		}
	}
	printf("%d\n", sum);
	return (0);
}
