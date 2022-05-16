#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to separator b/w numbers
 * @n: numbers of variables
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int res;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(args, int);
		printf("%d", res);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
