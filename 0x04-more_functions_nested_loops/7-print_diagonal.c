#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input value
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int count = 0, size;

	if (n > 0)
	{
		while (count < n)
		{
			for (size = 0; size < count; size++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
		putchar('\n');
}
