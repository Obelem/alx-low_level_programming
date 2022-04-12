#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to print last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);

	_putchar('\n');
}
