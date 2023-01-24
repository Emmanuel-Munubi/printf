#include "main.h"

/**
 * print_string - prints a string
 * @ap: va_list
 *
 * Return: string
 */
char *print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";
	return (s);
}
