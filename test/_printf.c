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
void _printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);

	my_print(format, ap);
	/*return (my_print(format, ap));*/

	va_end(ap);
}
