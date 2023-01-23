#include "main.h"
#include <stdarg.h>

/**
 * State
 * 0 = normal
 * 1 = escape
 */
void my_print(const char *fmt, va_list ap)
{
	int state = 0;

	while (*fmt)
	{
		if (state == 0)
		{
			putchar(*fmt);
			if (*fmt == '%')
				state = 1;
		} else if (state == 1)
		{
			t_print specifiers[] = {
				{'c', &print_character},
				{'s', &print_string},
				{(char)NULL, NULL}
			};

			for(int i = 0; specifiers[i].f; i++)
			{
				if(*fmt++ == specifiers[i].f)
				{
					specifiers[i].func(ap);
				}
			}
			state = 0;
		}
		fmt++;
	}
}

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	my_print(format, args);

	va_end(args);

}
