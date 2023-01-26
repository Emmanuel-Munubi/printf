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
	char *buffer = malloc(sizeof(char) * 1024);
	char *specifier_buffer = malloc(sizeof(char) * 1024);
	int size, i = 0;
	va_list ap;
	va_start(ap, format);

	size = my_print(format, ap, buffer, specifier_buffer);
	
	while (buffer[i] != '\0') {
		_putchar(buffer[i]);
		i++;
	}
	
	va_end(ap);
	free(buffer);
	free(specifier_buffer);
	return size;
}
