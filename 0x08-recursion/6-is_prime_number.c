#include "main.h"
/**
 * is_prime_number - returns the natural square root of a number.
 * @n: integer to check
 * Return: 1 if prime number, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_calc(n, 2));
}
/**
 * is_prime_calc - actual calculation for prime number check
 * @n: integer to check
 * @x: used for comparison and iteration
 * Return:0 or 1;
 */
int is_prime_calc(int n, int x)
{
	if (x < n)
	{
		if (n % x == 0)
			return (0);

		return (is_prime_calc(n, x + 1));
	}
	return (1);
}
