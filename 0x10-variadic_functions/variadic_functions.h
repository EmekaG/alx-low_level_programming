#ifndef VARIADIC_FUCNTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * file - variadic_functions.h
 * desc: header files containing prototypes for this current project
 */
#include <stdarg.h>

/**
 * struct printer - a new struct type defining a printer
 * @symbol: a symbol representing a data type
 * @print: a function pointer to a function that prints a data
 *         type to the corresponding symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list args);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
