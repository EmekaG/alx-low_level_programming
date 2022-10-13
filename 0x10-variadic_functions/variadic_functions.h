#ifndef VARIADIC_FUCNTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * file - variadic_functions.h
 * desc: header files containing prototypes for this current project
 */
#include "stdarg.h"
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
