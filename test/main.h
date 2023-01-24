#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 *       used in the printf directory.
 */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct printer - A new struct type defining a printer.
 * @f: A symbol representing a data type.
 * @func: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct print
{
	char f;
	char *(*func)(va_list);
} t_print;

int _putchar(char c);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
char *_strcat(char *dest, char *src);

char *print_char(va_list ap);
char *print_string(va_list ap);
void _printf(const char *format, ...);
void my_print(const char *fmt, va_list ap);
char *get_specifier_buffer(char c, va_list ap);

#endif
