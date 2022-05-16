#ifndef _VARIADIC_
#define _VARIADIC_

#include <stdarg.h>

int _putchar (char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Added functions to print_all source code */
void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);

/**
 * struct checker - defines printer
 * @type: represents a data type
 * @f: function pointer
 */
typedef struct checker
{
	char *type;
	void (*f)();
} checker;


#endif
