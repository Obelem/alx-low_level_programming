#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number to get factorial of
 *
 * Return: -1 if n < 0, 1 if n  is 0, recusive call otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
