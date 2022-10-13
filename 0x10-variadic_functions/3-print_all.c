#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @args: list of arguments pointing to the character to be printed
 */
void print_char(va_list args)
{
	char letter;

	letter = va_arg(args, int);
	printf("%c", letter);
}

/**
 * print_int - prints an int
 * @args: lists of arguments pointing to the integer to be printed
 */
void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - prints a float
 * @args: lists of arguments pointing to the float to be printed
 */
void print_float(va_list args)
{
	float num;

	num = va_arg(args, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @args: list of arguments pointing to the string to be printed
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything followed by a new line
 * @format: a string of characters representing the argument type
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	char *seperator = "";
	printer_t func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(func[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", seperator);
			func[j].print(arg);
			seperator = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(arg);
}
