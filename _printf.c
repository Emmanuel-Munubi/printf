#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - prints a string
 * @format: string
 * @ap: va_list
 *
 * Return: string
 */
int _printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);

	return (my_print(format, ap));

	va_end(ap);
}
