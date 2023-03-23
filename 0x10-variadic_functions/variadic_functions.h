#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
#include "stdarg.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * struct printer - Struct for printer
 * @symbol: symbol for data type
 * @print: poitner to function that prints a data type
 * that corresponds with the symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
