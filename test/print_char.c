#include "main.h"

/**
 * print_char - prints a char
 * @ap: va_list
 *
 * Return: string
 */
char *print_char(va_list ap)
{
	char *s = malloc(2);

	s[0] = va_arg(ap, int);
	s[1] = '\0';
	return (s);
}