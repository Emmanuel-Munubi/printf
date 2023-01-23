#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 *       used in the printf directory.
 */

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

void print_integers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _printf(const char *format, ...);

#endif
