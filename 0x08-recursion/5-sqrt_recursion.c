#include "main.h"

/**
 * _sqrt_recursion - returns the natural square of a number.
 * @n: number to get square root of
 *
 * Return: -1 if no square root found, sqrt if found.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_calc(n, 1));
}
/**
 * sqrt_calc - calculate sqrt
 * @n: number to find square root of
 * @x: for iteration
 *
 * Return: x (square root of n)
 */
int sqrt_calc(int n, int x)
{
	if (n <= 0)
		return (-1);
	if (x * x > n)
		return (-1);
	if (n == x * x)
		return (x);

	return (sqrt_calc(n, x + 1));
}
