#ifndef _VARIADIC_
#define _VARIADIC_

int _putchar (char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Added functions to print_all source code */
void print_c(va_list c);
void print_s(va_list s);
void print_i(va_list i);
void print_f(va_list f);



#endif
