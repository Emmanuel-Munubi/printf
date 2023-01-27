#include "main.h"

/**
 * _printf - prints a string
 * @format: string to print
 *
 * Return: string
 */
int _printf(const char *format, ...)
{
	char *buffer = malloc(sizeof(char) * 1024);
	char *specifier_buff = malloc(sizeof(char) * 1024);
	int size, i = 0;
	va_list ap;

	va_start(ap, format);

	size = my_print(format, ap, buffer, specifier_buff);
	while (buffer[i] != '\0')
	{
		_putchar(buffer[i]);
		i++;
	}
	va_end(ap);
	free(buffer);
	free(specifier_buff);
	return (size);
}
