#include "main.h"

/**
 * get_print_func - gets the apropriate printing function
 * for a given format-specifier
 * @c: format-specifier
 *
 * Return: string or empty string
 */
char *get_specifier_buffer(char c, va_list ap)
{
	int i;
	t_print t[] = {
	    {'c', print_char},
	    {'s', print_string},
	    {'u', print_unsigned_int},
	    {'d', print_int},
	    {'i', print_int},
	    /*// {'o', print_octal},
	    // {'x', print_hex},
	    // {'X', print_hex},
	    // {'b', print_binary},
	    // {'S', print_big_s},
	    // {'p', print_pointer},
	    // {'r', print_rev},
	    //  {'R', print_rot},*/
	    {'\0', NULL}};
	for (i = 0; t[i].f; i++)
	{
		if (t[i].f == c)
			return (t[i].func(ap));
	}
	return ("");
}