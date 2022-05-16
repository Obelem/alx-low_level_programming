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
	int i, res;
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(args, int);
		printf("%d", res);

		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
