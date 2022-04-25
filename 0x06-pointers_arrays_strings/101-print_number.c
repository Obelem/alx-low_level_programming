#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int j, out;

	j = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	while (j * 10 <= n)
		j = j * 10;

	while (j >= 1)
	{
		out = n / j;
		_putchar(out + '0');
		n = n % j;
		j = j / 10;
	}
}
