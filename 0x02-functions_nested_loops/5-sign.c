#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Return: 1 for n > 0 | 0 for n == 0 | -1 for n < 0
 *
 * @n: contains value to be compared
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
