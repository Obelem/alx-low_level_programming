#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all variadic functions param
 * @n: mandatory arg
 * Return: 0 if n == 0, sum if success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, unsigned int);

	va_end(args);

	return (sum);
}
